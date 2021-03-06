#include "z_en_elfbub.h"

#define FLAGS 0x00000001

#define THIS ((EnElfbub*)thisx)

void EnElfbub_Init(Actor* thisx, GlobalContext* globalCtx);
void EnElfbub_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnElfbub_Update(Actor* thisx, GlobalContext* globalCtx);
void EnElfbub_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Elfbub_InitVars = {
    ACTOR_EN_ELFBUB,
    ACTORTYPE_MISC,
    FLAGS,
    OBJECT_BUBBLE,
    sizeof(EnElfbub),
    (ActorFunc)EnElfbub_Init,
    (ActorFunc)EnElfbub_Destroy,
    (ActorFunc)EnElfbub_Update,
    (ActorFunc)EnElfbub_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Elfbub_0x80ACDCD0/EnElfbub_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Elfbub_0x80ACDCD0/EnElfbub_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Elfbub_0x80ACDCD0/func_80ACDE60.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Elfbub_0x80ACDCD0/func_80ACE030.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Elfbub_0x80ACDCD0/EnElfbub_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Elfbub_0x80ACDCD0/EnElfbub_Draw.asm")
