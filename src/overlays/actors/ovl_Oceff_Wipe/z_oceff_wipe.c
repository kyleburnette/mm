#include "z_oceff_wipe.h"

#define FLAGS 0x02000010

#define THIS ((OceffWipe*)thisx)

void OceffWipe_Init(Actor* thisx, GlobalContext* globalCtx);
void OceffWipe_Destroy(Actor* thisx, GlobalContext* globalCtx);
void OceffWipe_Update(Actor* thisx, GlobalContext* globalCtx);
void OceffWipe_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Oceff_Wipe_InitVars = {
    ACTOR_OCEFF_WIPE,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(OceffWipe),
    (ActorFunc)OceffWipe_Init,
    (ActorFunc)OceffWipe_Destroy,
    (ActorFunc)OceffWipe_Update,
    (ActorFunc)OceffWipe_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Oceff_Wipe_0x809764B0/OceffWipe_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Oceff_Wipe_0x809764B0/OceffWipe_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Oceff_Wipe_0x809764B0/OceffWipe_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Oceff_Wipe_0x809764B0/OceffWipe_Draw.asm")
