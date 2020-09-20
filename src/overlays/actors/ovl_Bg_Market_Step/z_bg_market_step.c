#include "z_bg_market_step.h"

#define FLAGS 0x10000020

#define THIS ((BgMarketStep*)thisx)

void BgMarketStep_Init(Actor* thisx, GlobalContext* globalCtx);
void BgMarketStep_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit Bg_Market_Step_InitVars = { ACTOR_BG_MARKET_STEP,
                                            ACTORTYPE_BG,
                                            FLAGS,
                                            OBJECT_MARKET_OBJ,
                                            sizeof(BgMarketStep),
                                            (ActorFunc)BgMarketStep_Init,
                                            (ActorFunc)func_800BDFB0,
                                            (ActorFunc)func_800BDFB0,
                                            (ActorFunc)BgMarketStep_Draw };

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(unkFC, 1, ICHAIN_CONTINUE),
    ICHAIN_F32(unk100, 1, ICHAIN_CONTINUE),
    ICHAIN_F32(unk104, 1, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 1000, ICHAIN_STOP),
};

s32 D_80AF0120[] = { 0x0601F050, 0x06018DA0 };
s32 D_80AF0128[] = { 0x0601EF10, 0x06018C60 };

void BgMarketStep_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgMarketStep* this = THIS;

    Actor_ProcessInitChain(&this->actor, sInitChain);
}
void BgMarketStep_Draw(Actor* thisx, GlobalContext* globalCtx) {
    s32 index = thisx->params & 1;

    func_800BDFC0(globalCtx, D_80AF0120[index]);
    func_800BDFC0(globalCtx, D_80AF0128[index]);
}
