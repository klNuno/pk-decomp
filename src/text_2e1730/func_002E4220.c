#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E4220_0;

typedef struct {
    u8 pad_00[0x1C];
} unk_func_002E4220_1;

void c4sdk_malloc(s32 *, s32);
void func_002CDB60(s32 *, u8 *, s32 *);
void func_002DB850(unk_func_002E4220_0 *, u8 *);
void func_002E9CC0(unk_func_002E4220_1 *, s32 *);
u8 func_002EA240(unk_func_002E4220_1 *);
void func_002EA580(unk_func_002E4220_1 *, unk_func_002E4220_0 *);
extern u8 D_0035BA78[];

void func_002E4220(unk_func_002E4220_0 *arg0) {
    unk_func_002E4220_1 sp20;
    u8 sp3C[2];
    u8 ok;
    u8 *str;
    s32 sp40;
    s32 sp44;

    func_002EA580(&sp20, arg0);
    arg0->unk_10 += 4;
    ok = func_002EA240(&sp20);
    func_002DB850(arg0, sp3C);
    if (ok) {
        str = sp3C;
        if (str[0] == 0) {
            s32 sp48;

            func_002CDB60(&sp40, D_0035BA78, &sp48);
            func_002E9CC0(&sp20, &sp40);
            c4sdk_malloc(&sp40, 0);
        } else {
            s32 sp4C;

            sp3C[1] = 0;
            func_002CDB60(&sp44, str, &sp4C);
            func_002E9CC0(&sp20, &sp44);
            c4sdk_malloc(&sp44, 0);
        }
    }
}
