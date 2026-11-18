#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0x7];
    s32 unk_08;
    s32 *unk_0C;
} unk_func_002E9CC0_0;

void c4sdk_malloc(s32 *, s32);
void func_002CD690(s32, s32, s32, s32);
void func_002CDC10(s32 *);
void func_002EA5B0(s32, s32 *);

void func_002E9CC0(unk_func_002E9CC0_0 *arg0, s32 arg1) {
    s32 sp2C;

    if (arg0->unk_00 != 0) {
        if (arg0->unk_08 != 0) {
            func_002CDC10(&sp2C);
            func_002EA5B0(arg0->unk_08, &sp2C);
            c4sdk_malloc(&sp2C, 0);
        }
    } else if (arg0->unk_0C != NULL && arg0->unk_0C[0] != 0) {
        func_002CD690(arg0->unk_0C[0], arg1, 0, -1);
    }
}
