#include "z_en_dns.h"

#define FLAGS 0x00000019

#define THIS ((EnDns*)thisx)

void EnDns_Init(Actor* thisx, GlobalContext* globalCtx);
void EnDns_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnDns_Update(Actor* thisx, GlobalContext* globalCtx);
void EnDns_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Dns_InitVars = {
    ACTOR_EN_DNS,
    ACTORTYPE_NPC,
    FLAGS,
    OBJECT_DNS,
    sizeof(EnDns),
    (ActorFunc)EnDns_Init,
    (ActorFunc)EnDns_Destroy,
    (ActorFunc)EnDns_Update,
    (ActorFunc)EnDns_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092C5C0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092C63C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092C6FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092C740.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092C86C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092C934.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092C9BC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092CA74.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092CAD0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092CB98.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092CC68.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092CCEC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092CE38.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092D068.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092D108.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092D1B8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092D320.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092D330.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092D4D8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092D5E8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/EnDns_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/EnDns_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/EnDns_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092D954.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092DA68.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/func_8092DA94.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Dns_0x8092C5C0/EnDns_Draw.asm")
