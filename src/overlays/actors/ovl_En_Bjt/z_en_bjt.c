#include "z_en_bjt.h"

#define FLAGS 0x00000009

#define THIS ((EnBjt*)thisx)

void EnBjt_Init(Actor* thisx, GlobalContext* globalCtx);
void EnBjt_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnBjt_Update(Actor* thisx, GlobalContext* globalCtx);
void EnBjt_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Bjt_InitVars = {
    ACTOR_EN_BJT,
    ACTORTYPE_NPC,
    FLAGS,
    OBJECT_BJT,
    sizeof(EnBjt),
    (ActorFunc)EnBjt_Init,
    (ActorFunc)EnBjt_Destroy,
    (ActorFunc)EnBjt_Update,
    (ActorFunc)EnBjt_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD2E0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD30C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD3A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD434.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD4FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD5E4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD6BC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD8F0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFD984.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFDA48.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/func_80BFDAE8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/EnBjt_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/EnBjt_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/EnBjt_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Bjt_0x80BFD2E0/EnBjt_Draw.asm")
