#include "z_obj_jgame_light.h"

#define FLAGS 0x00000010

#define THIS ((ObjJgameLight*)thisx)

void ObjJgameLight_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjJgameLight_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjJgameLight_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjJgameLight_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Jgame_Light_InitVars = {
    ACTOR_OBJ_JGAME_LIGHT,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_SYOKUDAI,
    sizeof(ObjJgameLight),
    (ActorFunc)ObjJgameLight_Init,
    (ActorFunc)ObjJgameLight_Destroy,
    (ActorFunc)ObjJgameLight_Update,
    (ActorFunc)ObjJgameLight_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jgame_Light_0x80C152F0/ObjJgameLight_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jgame_Light_0x80C152F0/ObjJgameLight_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jgame_Light_0x80C152F0/func_80C15474.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jgame_Light_0x80C152F0/func_80C156C4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jgame_Light_0x80C152F0/func_80C15718.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jgame_Light_0x80C152F0/ObjJgameLight_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Jgame_Light_0x80C152F0/ObjJgameLight_Draw.asm")
