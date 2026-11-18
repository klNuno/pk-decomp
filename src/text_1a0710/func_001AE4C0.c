/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_001AE4C0_0;

typedef struct {
    unk_func_001AE4C0_0 *unk_00;
    u8 pad_04[0x10];
} unk_func_001AE4C0_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xC];
} unk_func_001AE4C0_2;

typedef struct {
    u8 pad_00[0xA4];
    unk_func_001AE4C0_1 *unk_A4;
} unk_func_001AE4C0_3;

void **HIE_fn_hGetSuperObjectObject();
s32 func_00199130();
s32 func_0019FBA0();
unk_func_001AE4C0_2 **func_001A7060();
s32 func_001AB730();
u8 func_001ABE30();
extern s16 D_0035FFB4;

void func_001AE4C0(s32 arg0, u8 arg1, u8 arg2) {
    unk_func_001AE4C0_3 *obj = 0;
    unk_func_001AE4C0_1 *arr = 0;
    unk_func_001AE4C0_1 *e = 0;
    unk_func_001AE4C0_2 *tab = 0;
    s16 idx = 0;
    s16 n = 0;
    s32 flag;
    u8 c;

    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    tab = *func_001A7060(obj);
    arr = obj->unk_A4;
    n = (s16)func_001AB730(func_0019FBA0(func_00199130(obj), 0));
    if (arg2 < 0x20) {
        idx = -1;
    } else {
        c = func_001ABE30(arg2);
        idx = c + D_0035FFB4;
    }
    if (idx < 0 || idx >= n) {
        idx = 0;
        return;
    }
    e = &arr[arg1];
    if (tab[idx].unk_04 != 0) {
        flag = 8;
    } else {
        flag = 1;
    }
    e->unk_00->unk_00 = flag;
    e->unk_00->unk_04 = tab[idx].unk_04;
}
