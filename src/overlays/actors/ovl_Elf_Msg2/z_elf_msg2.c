#include "z_elf_msg2.h"

#define FLAGS 0x00000010

#define THIS ((ElfMsg2*)thisx)

void ElfMsg2_Init(Actor* thisx, GlobalContext* globalCtx);
void ElfMsg2_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ElfMsg2_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Elf_Msg2_InitVars = {
    ACTOR_ELF_MSG2,
    ACTORTYPE_BG,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(ElfMsg2),
    (ActorFunc)ElfMsg2_Init,
    (ActorFunc)ElfMsg2_Destroy,
    (ActorFunc)ElfMsg2_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/func_8096EC40.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/func_8096EC4C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/ElfMsg2_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/ElfMsg2_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/func_8096EE50.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/func_8096EE64.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/func_8096EF98.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/func_8096EFD0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg2_0x8096EC40/ElfMsg2_Update.asm")
