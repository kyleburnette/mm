#ifndef Z_EN_INVADEPOH_H
#define Z_EN_INVADEPOH_H

#include <global.h>

struct EnInvadepoh;

typedef void (*EnInvadepohInitFunc)(struct EnInvadepoh*, GlobalContext*);

typedef void (*EnInvadepohActionFunc)(struct EnInvadepoh*, GlobalContext*);

typedef struct EnInvadepoh {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ Vec3s limbDrawTable[14];
    /* 0x1DC */ Vec3s transitionDrawTable[14];
    /* 0x230 */ char unk228[0x6C];
    /* 0x29C */ s8 unk29C;
    /* 0x29D */ char unk29D[0x3];
    /* 0x2A0 */ ColliderCylinder collider;
    /* 0x2EC */ EnInvadepohActionFunc actionFunc;
    /* 0x2F0 */ s16 unk2F0;
    /* 0x2F2 */ char unk2F2[0x2];
    /* 0x2F4 */ s8 unk2F4;
    /* 0x2F5 */ char unk2F5[0x13];
    /* 0x308 */ s8 unk308;
    /* 0x309 */ char unk309[0x3];
    /* 0x30C */ s32 unk30C;
    /* 0x310 */ char unk310[0x69];
    /* 0x379 */ s8 unk379;
    /* 0x380 */ char unk380[0x40];
} EnInvadepoh; // size = 0x3C0

extern const ActorInit En_Invadepoh_InitVars;

#endif // Z_EN_INVADEPOH_H
