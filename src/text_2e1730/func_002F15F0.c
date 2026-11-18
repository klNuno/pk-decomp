#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04[0x10];
} unk_func_002F15F0_0;

typedef struct {
    s32 unk_00;
    unk_func_002F15F0_0 unk_04;
} unk_func_002F15F0_1;

typedef struct {
    s32 unk_00;
    u8 unk_04[8];
} unk_func_002F15F0_2;

void c4sdk_malloc();
void func_002CD2A0();
void func_002F11C0();
void func_002F1210();
void func_002F1A40();

void func_002F15F0(s32 arg0) {
    unk_func_002F15F0_1 pair;
    unk_func_002F15F0_2 tmp;
    u8 res[8];
    unk_func_002F15F0_0 *pv;
    u8 *pm;

    func_002F1210(&tmp);
    pair.unk_00 = tmp.unk_00;
    func_002F11C0(&pair.unk_04, &tmp);
    func_002F1A40(res, arg0, &pair);
    pv = &pair.unk_04;
    if (pv != NULL) {
        func_002CD2A0(pair.unk_04.unk_04, -1);
    }
    pm = tmp.unk_04;
    if (pm != NULL) {
        c4sdk_malloc(pm, 0);
    }
}
