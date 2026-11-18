#include "common.h"

typedef struct unk_func_002E19B0_0 unk_func_002E19B0_0;
typedef void (*unk_func_002E19B0_fn)(unk_func_002E19B0_0 *);
typedef unk_func_002E19B0_fn (*unk_func_002E19B0_disp)(u16);

struct unk_func_002E19B0_0 {
    unk_func_002E19B0_disp *unk_00;
    u8 pad_04[0xC];
    u32 unk_10;
    u8 pad_14[0x10];
    u8 *unk_24;
    u8 pad_28[4];
    u32 unk_2C;
    u8 pad_30[0x30];
};

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0x10];
    u8 *unk_24;
    u8 pad_28[0x10];
    s32 unk_38;
} unk_func_002E19B0_1;

void func_002DFBF0(unk_func_002E19B0_0 *, s32);
void func_002DFC90(unk_func_002E19B0_0 *, s32, s32);
s32 func_002E4FD0(unk_func_002E19B0_0 *, unk_func_002E19B0_1 *, s32);

void func_002E19B0(unk_func_002E19B0_1 *arg0) {
    unk_func_002E19B0_0 ctx;
    s32 t;
    s32 v;

    func_002DFC90(&ctx, arg0->unk_38, arg0->unk_00);
    t = arg0->unk_10;
    v = *(s32 *)(arg0->unk_24 + (t + 4));
    arg0->unk_10 = t + 8;
    if (func_002E4FD0(&ctx, arg0, v) == 0) {
        func_002DFBF0(&ctx, -1);
        return;
    }
    for (;;) {
        if (ctx.unk_10 >= ctx.unk_2C) {
            break;
        }
        (*ctx.unk_00)(*(u16 *)(ctx.unk_24 + ctx.unk_10))(&ctx);
        if (ctx.unk_10 & 3) {
            ctx.unk_10 += 4 - (ctx.unk_10 & 3);
        }
    }
    func_002DFBF0(&ctx, -1);
}
