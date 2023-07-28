// --------------  id: construct_0058F79C  ---------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef SCENE_OBJECT30_H  // -----------------------------  /* auto */
#define SCENE_OBJECT30_H  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
  struct SceneObject2E;  // ------------------------------  /* auto */
  struct SceneObject30;  // ------------------------------  /* auto */
  struct SurfaceHolder;  // ------------------------------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
struct SceneObject30 {  // -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ SurfaceHolder *holders[4];  // -------------------  /* auto */
/* 10*/ uint32_t props_flags;  // ------------------------  /* auto */
/* 14*/ int32_t props_reductionLevel_andFlags;  // -------  /* auto */
/* 18*/ uint16_t props_surfWidth8_triangles;  // ---------  /* auto */
/* 1A*/ uint16_t props_surfHeight8_vertices;  // ---------  /* auto */
/* 1C*/ char surfhCount;  // -----------------------------  /* auto */
/* 1D*/ char texStageCountArrSize;  // -------------------  /* auto */
/* 1E*/ uint8_t d3dtexStageCount[2];  // -----------------  /* auto */
/* 20*/ char sceneObj2E_f21;  // -------------------------  /* auto */
/* 21*/ uint8_t gap_21[3];  // ---------------------------  /* auto */
/* 24*/ SceneObject2E *pobj2E;  // -----------------------  /* auto */
/* 28*/ SceneObject30 *prev;  // -------------------------  /* auto */
/* 2C*/ SceneObject30 *next;  // -------------------------  /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(SceneObject30) == 0x30);  // --------  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //SCENE_OBJECT30_H  -------------------------------  /* auto */
// -------------------------------------------------------  /* auto */
