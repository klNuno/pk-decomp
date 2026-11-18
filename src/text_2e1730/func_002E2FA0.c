#include "common.h"

typedef struct {
    s32 unk_00[6];
} unk_func_002E2FA0_0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2FA0_1;

void c4sdk_malloc(s32 *, s32);
void func_002CD230(s32 *, s32 *, s32 *);
void func_002CDC10(s32 *, s32 *);
void func_002D0DA0(s32 *, s32 *);
void func_002DC050(unk_func_002E2FA0_1 *, s32 *);
void func_002E9CC0(unk_func_002E2FA0_0 *, s32 *);
u8 func_002E9D40(unk_func_002E2FA0_0 *, s32 *);
void func_002EA580(unk_func_002E2FA0_0 *, unk_func_002E2FA0_1 *);

void func_002E2FA0(unk_func_002E2FA0_1 *arg0) {
    unk_func_002E2FA0_0 sp30;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    u8 temp_s0;

    func_002EA580(&sp30, arg0);
    func_002D0DA0(&sp48, &sp58);
    func_002D0DA0(&sp4C, &sp5C);
    arg0->unk_10 += 4;
    temp_s0 = func_002E9D40(&sp30, &sp48);
    func_002DC050(arg0, &sp4C);
    if (temp_s0) {
        func_002CD230(&sp54, &sp48, &sp4C);
        func_002CDC10(&sp50, &sp54);
        c4sdk_malloc(&sp54, 0);
        func_002E9CC0(&sp30, &sp50);
        c4sdk_malloc(&sp50, 0);
    }
    c4sdk_malloc(&sp4C, 0);
    c4sdk_malloc(&sp48, 0);
}
