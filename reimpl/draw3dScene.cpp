//
// Created by DiaLight on 15.11.2022.
//
//#include <dk2.h>
#include <reimpl.h>
#include <cstdio>
#include <cstdint>
//#include <dk2/surface.h>
#include <dk2_structures.h>
#include <api.h>

typedef void (__stdcall *draw3dScene_t)();
typedef int (*_probablySortSurfListX3_593F20_t)();
typedef int (__thiscall *SceneObject30List_enlarge_t)(dk2::SceneObject30List *_this, unsigned int count);
typedef int *(__cdecl *something_static_setSceneObject30_589D90_t)(dk2::SceneObject30 *a1);
typedef void (__stdcall *setupLastSceneObject_t)();

draw3dScene_t draw3dScene_orig = nullptr;
_probablySortSurfListX3_593F20_t _probablySortSurfListX3_593F20 = nullptr;
uint32_t *pobjectsToDraw_count = nullptr;
dk2::SceneObject30List *SceneObject30List_instance = nullptr;
SceneObject30List_enlarge_t SceneObject30List_enlarge = nullptr;
dk2::SceneObject2EList *SceneObject2EList_instance = nullptr;
something_static_setSceneObject30_589D90_t something_static_setSceneObject30_589D90 = nullptr;
setupLastSceneObject_t setupLastSceneObject = nullptr;


dk2::SceneObject30 *SceneObject30_findFromO2E(
    dk2::SceneObject2E &obj2E,
    dk2::SurfaceHolder **holders
    ) {
  dk2::SceneObject30 *obj30 = holders[0]->f0_SceneObject30;
  for(; obj30; obj30 = obj30->f28_prev) {
    if(obj30->f1D_texStageCountArrSize != obj2E.f1E_propsCount) continue;
    if(obj30->f20_sceneObj2E_f21 != obj2E.field_21) continue;
    uint32_t *propsArr30 = &obj30->f10_props_flags;
    uint32_t *propsArr2E = &obj2E.f10_props_flags;

    // compare surf props?
    int k;
    for (k = 0; k < obj2E.f1E_propsCount; ++k) {  // max 3
      if(propsArr30[k] != propsArr2E[k]) break;
    }
    if(k != obj2E.f1E_propsCount) continue;  // there diff prop

    if(obj30->f1C_surfhCount == obj2E.f1D_surfhCount) {
      // handle rest surfh
      int m;
      for (m = 1; m < obj2E.f1D_surfhCount; ++m) {
        if(obj30->f0_holders[m] != holders[m]) break;
      }
      if(m == obj2E.f1D_surfhCount) break;
    }
  }
  return obj30;
}
void SceneObject30_initFromO2E(
    dk2::SceneObject30 *obj30,
    dk2::SceneObject2E &obj2E,
    dk2::SurfaceHolder **holders
) {
  for (int j = 0; j < obj2E.f1D_surfhCount; ++j) {
    obj30->f0_holders[j] = holders[j];
  }
  uint32_t *propsArr30 = &obj30->f10_props_flags;
  uint8_t *props2Arr30 = (uint8_t *) &obj30->f1E_d3dtexStageCount;
  uint32_t *propsArr2E = (uint32_t *) &obj2E.f10_props_flags;
  uint8_t *props2Arr2E = (uint8_t *) &obj2E.f1F_trgObj;
  for (int j = 0; j < obj2E.f1E_propsCount; ++j) {
    propsArr30[j] = propsArr2E[j];
    props2Arr30[j] = props2Arr2E[j];
  }
  obj30->f1C_surfhCount = obj2E.f1D_surfhCount;
  obj30->f20_sceneObj2E_f21 = obj2E.field_21;
  obj30->f1D_texStageCountArrSize = obj2E.f1E_propsCount;
  obj30->f18_props_surfWidth8 = 0;
  obj30->f1A_props_surfHeight8 = 0;
  obj30->f24_pobj2E = 0;
  // add to linked list
  obj30->f28_prev = holders[0]->f0_SceneObject30;
  holders[0]->f0_SceneObject30 = obj30;
}
void reimpl_draw3dScene() {
  _probablySortSurfListX3_593F20();
  if(*pobjectsToDraw_count >= SceneObject30List_instance->f4_maxCount) {
    SceneObject30List_enlarge(SceneObject30List_instance, *pobjectsToDraw_count);
  }
  dk2::SceneObject30 *last = nullptr;
  if(*pobjectsToDraw_count > 0) {
    int o30idx = 0;
    for (int i = 0; i < *pobjectsToDraw_count; ++i) {
      auto &obj2E = SceneObject2EList_instance->f8_arr[i];
      dk2::SurfaceHolder *holders[4];
      for (int j = 0; j < obj2E.f1D_surfhCount; ++j) {
        auto &surfh = obj2E.f0_surfh[j];
        holders[j] = surfh->f1C_curReduction->f4_holder_parent;
      }
      dk2::SceneObject30 *obj30 = SceneObject30_findFromO2E(obj2E, holders);
      if(obj30 && (obj2E.f18_props_surfWidth8 + obj30->f18_props_surfWidth8) > 256) {
        obj30 = nullptr;
      }
      if(!obj30) {
        obj30 = &SceneObject30List_instance->f8_arr[o30idx];
        SceneObject30_initFromO2E(obj30, obj2E, holders);
        obj30->f2C_next = last;
        last = obj30;
        o30idx++;
      }

      obj2E.f28_next = obj30->f24_pobj2E;
      obj30->f24_pobj2E = &obj2E;
      obj30->f18_props_surfWidth8 += obj2E.f18_props_surfWidth8;
      obj30->f1A_props_surfHeight8 += obj2E.f1A_props_surfHeight8;
    }
  }
  for (dk2::SceneObject30 *obj30 = last; obj30; obj30 = obj30->f2C_next) {
    something_static_setSceneObject30_589D90(obj30);
    for (auto *obj2E = obj30->f24_pobj2E; obj2E; obj2E = obj2E->f28_next) {
      (*(void (__thiscall **)(int, uint32_t, dk2::SceneObject2E *))(*(uint32_t *)obj2E->f24_onj__meshSprite + 4))(
          obj2E->f24_onj__meshSprite,
          (unsigned __int16)obj2E->f2C_,
          obj2E);
    }
    setupLastSceneObject();
    obj30->f0_holders[0]->f0_SceneObject30 = nullptr;
  }
  *pobjectsToDraw_count = 0;
}


bool reimpl::draw3dScene() {
  setupLastSceneObject = (setupLastSceneObject_t) (dk2_base + (0x0058A150 - dk2_virtual_base));
  something_static_setSceneObject30_589D90 = (something_static_setSceneObject30_589D90_t) (dk2_base + (0x00589D90 - dk2_virtual_base));
  SceneObject2EList_instance = (dk2::SceneObject2EList *) (dk2_base + (0x007820A8 - dk2_virtual_base));
  SceneObject30List_enlarge = (SceneObject30List_enlarge_t) (dk2_base + (0x0058F8E0 - dk2_virtual_base));
  SceneObject30List_instance = (dk2::SceneObject30List *) (dk2_base + (0x007820B8 - dk2_virtual_base));
  pobjectsToDraw_count = (uint32_t *) (dk2_base + (0x007820C4 - dk2_virtual_base));
  _probablySortSurfListX3_593F20 = (_probablySortSurfListX3_593F20_t) (dk2_base + (0x00593F20 - dk2_virtual_base));
  draw3dScene_orig = (draw3dScene_t) (dk2_base + (0x0058F640 - dk2_virtual_base));
  if(!replaceXrefs((uint8_t *) draw3dScene_orig, reimpl_draw3dScene)) return false;
  return true;
}
