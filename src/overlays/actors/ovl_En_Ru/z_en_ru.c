#include "z_en_ru.h"

#define FLAGS 0x00000019

#define THIS ((EnRu*)thisx)

void EnRu_Init(Actor* thisx, GlobalContext* globalCtx);
void EnRu_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnRu_Update(Actor* thisx, GlobalContext* globalCtx);
void EnRu_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Ru_InitVars = {
    ACTOR_EN_RU,
    ACTORTYPE_NPC,
    FLAGS,
    OBJECT_RU2,
    sizeof(EnRu),
    (ActorFunc)EnRu_Init,
    (ActorFunc)EnRu_Destroy,
    (ActorFunc)EnRu_Update,
    (ActorFunc)EnRu_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/func_80A389A0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/func_80A38A68.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/func_80A38B7C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/func_80A38BF0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/func_80A38C70.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/func_80A38DF4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/EnRu_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/EnRu_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/EnRu_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/func_80A38FB4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/func_80A390F8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Ru_0x80A389A0/EnRu_Draw.asm")
