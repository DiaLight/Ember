// -----------------  id: Object_union  ------------------  /* auto */
// ----  warning: file is managed by gen_struct_h.py  ----  /* auto */
// ---  you can edit code only in *_user_code blocks  ----  /* auto */
// -------------------------------------------------------  /* auto */
#ifndef C_OBJECT_UNION_DATA_H  // ------------------------  /* auto */
#define C_OBJECT_UNION_DATA_H  // ------------------------  /* auto */
// -------------------------------------------------------  /* auto */
#include <cstdint>  // -----------------------------------  /* auto */
#include <cstdio>  // ------------------------------------  /* auto */
#include <dinput.h>  // ----------------------------------  /* auto */
#include <dsound.h>  // ----------------------------------  /* auto */
#include <ddraw.h>  // -----------------------------------  /* auto */
#include <d3d.h>  // -------------------------------------  /* auto */
#include <dk2/entities/objects/CObject_BookCase.h>  // ---  /* auto */
#include <dk2/entities/objects/CObject_Boulder.h>  // ----  /* auto */
#include <dk2/entities/objects/CObject_CallToArms.h>  // -  /* auto */
#include <dk2/entities/objects/CObject_Chicken.h>  // ----  /* auto */
#include <dk2/entities/objects/CObject_ClaimedManaVault.h>  /* auto */
#include <dk2/entities/objects/CObject_Coop.h>  // -------  /* auto */
#include <dk2/entities/objects/CObject_Destructor.h>  // -  /* auto */
#include <dk2/entities/objects/CObject_FECandleStick.h>     /* auto */
#include <dk2/entities/objects/CObject_Gold.h>  // -------  /* auto */
#include <dk2/entities/objects/CObject_GuardPost.h>  // --  /* auto */
#include <dk2/entities/objects/CObject_HeroGate2By2.h>      /* auto */
#include <dk2/entities/objects/CObject_Lair.h>  // -------  /* auto */
#include <dk2/entities/objects/CObject_ManaVault.h>  // --  /* auto */
#include <dk2/entities/objects/CObject_ManufactureCrate.h>  /* auto */
#include <dk2/entities/objects/CObject_Rat.h>  // --------  /* auto */
#include <dk2/entities/objects/CObject_ResearchBook.h>      /* auto */
#include <dk2/entities/objects/CObject_Special.h>  // ----  /* auto */
#include <dk2/entities/objects/CObject_Spinning.h>  // ---  /* auto */
#include <dk2/entities/objects/CObject_TempleCandleStick.h>  /* auto */
#include <dk2/entities/objects/CObject_ThreatBurn.h>  // -  /* auto */
#include <dk2/entities/objects/CObject_TombStone.h>  // --  /* auto */
#include <dk2/entities/objects/CObject_TortureWheel.h>      /* auto */
#include <dk2/entities/objects/CObject_TrainingTarget.h>    /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: head_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
namespace dk2 {  // --------------------------------------  /* auto */
#pragma pack(push, 1)  // --------------------------------  /* auto */
union CObjectUnionData {  // -----------------------------  /* auto */
// -------------------------------------------------------  /* auto */
/*  0*/ CObject_CallToArms t10_callToArms;  // -----------  /* auto */
/*  0*/ char raw[18];  // --------------------------------  /* auto */
/*  0*/ CObject_Coop t35_coop;  // -----------------------  /* auto */
/*  0*/ CObject_Chicken t9_chicken;  // ------------------  /* auto */
/*  0*/ CObject_Rat t11_rat;  // -------------------------  /* auto */
/*  0*/ CObject_ResearchBook t4_researchBook;  // --------  /* auto */
/*  0*/ CObject_TortureWheel t8_tortureWheel;  // --------  /* auto */
/*  0*/ CObject_Boulder t74_boulder;  // -----------------  /* auto */
/*  0*/ CObject_TrainingTarget t29_trainingTarget;  // ---  /* auto */
/*  0*/ CObject_GuardPost t70_guardPost;  // -------------  /* auto */
/*  0*/ CObject_FECandleStick t110_fECandleStick;  // ----  /* auto */
/*  0*/ CObject_TempleCandleStick t111_templeCandleStick;   /* auto */
/*  0*/ CObject_Destructor t98_destructor;  // -----------  /* auto */
/*  0*/ CObject_ManaVault t101_manaVault;  // ------------  /* auto */
/*  0*/ CObject_ClaimedManaVault t108_claimedManaVault;     /* auto */
/*  0*/ CObject_HeroGate2By2 t114_heroGate2By2;  // ------  /* auto */
/*  0*/ CObject_ThreatBurn t103_threatBurn;  // ----------  /* auto */
/*  0*/ CObject_TombStone t31_t32_t33_t34_tombStone;  // -  /* auto */
/*  0*/ CObject_BookCase t64_bookCase;  // ---------------  /* auto */
/*  0*/ CObject_Gold l40_gold;  // -----------------------  /* auto */
/*  0*/ CObject_Special l4_special;  // ------------------  /* auto */
/*  0*/ CObject_Spinning s18_spinning;  // ---------------  /* auto */
/*  0*/ CObject_Lair l20_lair;  // -----------------------  /* auto */
/*  0*/ CObject_ManufactureCrate l10_manufactureCrate;      /* auto */
// -------------------------------------------------------  /* auto */
// ---------------  block: body_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
};  // ---------------------------------------------------  /* auto */
#pragma pack(pop)  // ------------------------------------  /* auto */
static_assert(sizeof(CObjectUnionData) == 0x12);  // -----  /* auto */
}  // namespace dk2  -------------------------------------  /* auto */
// ---------------  block: tail_user_code  ---------------  /* auto */

// user code

// ---------------  end_of_block  ------------------------  /* auto */
#endif //C_OBJECT_UNION_DATA_H  --------------------------  /* auto */
// -------------------------------------------------------  /* auto */
