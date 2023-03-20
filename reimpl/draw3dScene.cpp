//
// Created by DiaLight on 15.11.2022.
//
#include <reimpl.h>
#include <cstdio>
#include <cstdint>
#include <dk2/SceneObject30List.h>
#include <dk2/SceneObject2EList.h>
#include <dk2/SceneObject2E.h>
#include <dk2/SceneObject30.h>
#include <dk2/SurfaceHolder.h>
#include <dk2/MyCESurfHandle.h>
#include <dk2/CEnginePrimitiveBase.h>
#include <dk2_info.h>
#include <utils/xrefs.h>

typedef void (__stdcall *draw3dScene_t)();
typedef int (*_probablySortSurfListX3_593F20_t)();
typedef int (__thiscall *SceneObject30List_enlarge_t)(dk2::SceneObject30List *_this, unsigned int count);
typedef int *(__cdecl *addObjectToScene_t)(dk2::SceneObject30 *a1);
typedef void (__stdcall *drawTexToSurfTriangles_t)();

draw3dScene_t draw3dScene_orig = nullptr;
_probablySortSurfListX3_593F20_t _probablySortSurfListX3_593F20 = nullptr;
uint32_t *pobjectsToDraw_count = nullptr;
dk2::SceneObject30List *SceneObject30List_instance = nullptr;
SceneObject30List_enlarge_t SceneObject30List_enlarge = nullptr;
dk2::SceneObject2EList *SceneObject2EList_instance = nullptr;
addObjectToScene_t addObjectToScene = nullptr;
drawTexToSurfTriangles_t drawTexToSurfTriangles = nullptr;


dk2::SceneObject30 *SceneObject30_findFromO2E(
    dk2::SceneObject2E &obj2E,
    dk2::SurfaceHolder **holders
    ) {
  dk2::SceneObject30 *obj30 = holders[0]->SceneObject30;
  for(; obj30; obj30 = obj30->prev) {
    if(obj30->texStageCountArrSize != obj2E.propsCount) continue;
    if(obj30->sceneObj2E_f21 != obj2E.f21) continue;
    int32_t *propsArr30 = &obj30->props_flags;
    int32_t *propsArr2E = &obj2E.props_flags;

    // compare surf props?
    int k;
    for (k = 0; k < obj2E.propsCount; ++k) {  // max 3
      if(propsArr30[k] != propsArr2E[k]) break;
    }
    if(k != obj2E.propsCount) continue;  // there diff prop

    if(obj30->surfhCount == obj2E.surfhCount) {
      // handle rest surfh
      int m;
      for (m = 1; m < obj2E.surfhCount; ++m) {
        if(obj30->holders[m] != holders[m]) break;
      }
      if(m == obj2E.surfhCount) break;
    }
  }
  return obj30;
}
void SceneObject30_initFromO2E(
    dk2::SceneObject30 *obj30,
    dk2::SceneObject2E &obj2E,
    dk2::SurfaceHolder **holders
) {
  for (int j = 0; j < obj2E.surfhCount; ++j) {
    obj30->holders[j] = holders[j];
  }
  int32_t *propsArr30 = &obj30->props_flags;
  uint8_t *props2Arr30 = (uint8_t *) &obj30->d3dtexStageCount;
  uint32_t *propsArr2E = (uint32_t *) &obj2E.props_flags;
  uint8_t *props2Arr2E = (uint8_t *) &obj2E.trgObj;
  for (int j = 0; j < obj2E.propsCount; ++j) {
    propsArr30[j] = propsArr2E[j];
    props2Arr30[j] = props2Arr2E[j];
  }
  obj30->surfhCount = obj2E.surfhCount;
  obj30->sceneObj2E_f21 = obj2E.f21;
  obj30->texStageCountArrSize = obj2E.propsCount;
  obj30->props_surfWidth8_triangles = 0;
  obj30->props_surfHeight8_vertices = 0;
  obj30->pobj2E = 0;
  // add to linked list
  obj30->prev = holders[0]->SceneObject30;
  holders[0]->SceneObject30 = obj30;
}
void reimpl_draw3dScene() {
  _probablySortSurfListX3_593F20();
  if(*pobjectsToDraw_count >= SceneObject30List_instance->maxCount) {
    SceneObject30List_enlarge(SceneObject30List_instance, *pobjectsToDraw_count);
  }
  dk2::SceneObject30 *last = nullptr;
  if(*pobjectsToDraw_count > 0) {
    int o30idx = 0;
    for (int i = 0; i < *pobjectsToDraw_count; ++i) {
      auto &obj2E = SceneObject2EList_instance->arr[i];
      dk2::SurfaceHolder *holders[4];
      for (int j = 0; j < obj2E.surfhCount; ++j) {
        auto &surfh = obj2E.surfh[j];
        holders[j] = surfh->curReduction->holder_parent;
      }
      dk2::SceneObject30 *obj30 = SceneObject30_findFromO2E(obj2E, holders);
      if(obj30 && (obj2E.props_surfWidth8 + obj30->props_surfWidth8_triangles) > 256) {
        obj30 = nullptr;
      }
      if(!obj30) {
        obj30 = &SceneObject30List_instance->arr[o30idx];
        SceneObject30_initFromO2E(obj30, obj2E, holders);
        obj30->next = last;
        last = obj30;
        o30idx++;
      }

      obj2E.next = obj30->pobj2E;
      obj30->pobj2E = &obj2E;
      obj30->props_surfWidth8_triangles += obj2E.props_surfWidth8;
      obj30->props_surfHeight8_vertices += obj2E.props_surfHeight8;
    }
  }
  for (dk2::SceneObject30 *obj30 = last; obj30; obj30 = obj30->next) {
    addObjectToScene(obj30);
    for (auto *obj2E = obj30->pobj2E; obj2E; obj2E = obj2E->next) {
      obj2E->onj__meshSprite->v___addRenderObj((unsigned __int16)obj2E->f2C_, obj2E);
    }
    drawTexToSurfTriangles();
    obj30->holders[0]->SceneObject30 = nullptr;
  }
  *pobjectsToDraw_count = 0;
}


bool reimpl::draw3dScene() {
  drawTexToSurfTriangles = (drawTexToSurfTriangles_t) (api::dk2_base + (0x0058A150 - dk2_virtual_base));
  addObjectToScene = (addObjectToScene_t) (api::dk2_base + (0x00589D90 - dk2_virtual_base));
  SceneObject2EList_instance = (dk2::SceneObject2EList *) (api::dk2_base + (0x007820A8 - dk2_virtual_base));
  SceneObject30List_enlarge = (SceneObject30List_enlarge_t) (api::dk2_base + (0x0058F8E0 - dk2_virtual_base));
  SceneObject30List_instance = (dk2::SceneObject30List *) (api::dk2_base + (0x007820B8 - dk2_virtual_base));
  pobjectsToDraw_count = (uint32_t *) (api::dk2_base + (0x007820C4 - dk2_virtual_base));
  _probablySortSurfListX3_593F20 = (_probablySortSurfListX3_593F20_t) (api::dk2_base + (0x00593F20 - dk2_virtual_base));
  draw3dScene_orig = (draw3dScene_t) (api::dk2_base + (0x0058F640 - dk2_virtual_base));
  if(!api::replaceXrefs((uint8_t *) draw3dScene_orig, reimpl_draw3dScene)) return false;
  return true;
}
