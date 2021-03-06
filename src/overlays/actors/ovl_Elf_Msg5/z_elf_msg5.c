#include "z_elf_msg5.h"

#define FLAGS 0x00000010

#define THIS ((ElfMsg5*)thisx)

void ElfMsg5_Init(Actor* thisx, GlobalContext* globalCtx);
void ElfMsg5_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ElfMsg5_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Elf_Msg5_InitVars = {
    ACTOR_ELF_MSG5,
    ACTORTYPE_BG,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(ElfMsg5),
    (ActorFunc)ElfMsg5_Init,
    (ActorFunc)ElfMsg5_Destroy,
    (ActorFunc)ElfMsg5_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg5_0x80AFD990/func_80AFD990.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg5_0x80AFD990/ElfMsg5_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg5_0x80AFD990/ElfMsg5_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg5_0x80AFD990/func_80AFDB38.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Elf_Msg5_0x80AFD990/ElfMsg5_Update.asm")
