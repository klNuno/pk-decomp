/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00239040_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00239040_0;

typedef struct unk_func_00239040_1 {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[3];
    u8 unk_08[1];
} unk_func_00239040_1;

typedef struct unk_func_00239040_2 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00239040_2;

typedef struct unk_func_00239040_3 {
    s32 unk_00;
    unk_func_00239040_2 *unk_04;
} unk_func_00239040_3;

typedef struct unk_func_00239040_4 {
    unk_func_00239040_3 **unk_00;
    u8 pad_04[4];
    u8 *unk_08;
} unk_func_00239040_4;

typedef struct unk_func_00239040_5 {
    u8 pad_00[0xC];
    unk_func_00239040_4 *unk_0C;
} unk_func_00239040_5;

unk_func_00239040_0 *HIE_fn_hGetSuperObjectObject();
unk_func_00239040_5 *fn_p_stBrainGetMind();
s8 *fn_p_stEvalTree();
void func_0011B518();
void func_00238DE0();
void func_00238E70();
void func_00238F00();
void func_00238FA0();

s8 *func_00239040(s32 arg0, s8 *arg1) {
    unk_func_00239040_1 *entry;
    void (*fn)();
    s32 n;
    s32 flag;
    unk_func_00239040_2 *info;
    u8 idx;
    s32 sp70[4];

    idx = *arg1;
    (void)idx;
    arg1 += 8;
    info = &(*fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_0C->unk_00)->unk_04[idx];
    entry = (unk_func_00239040_1 *)(fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_0C->unk_08 + info->unk_00);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp70);
    n = sp70[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp70);
    flag = sp70[0];
    if (entry->unk_04 < n) {
        n = entry->unk_04;
    }
    switch (entry->unk_00) {
    case 5:
        if (flag) {
            fn = func_00238E70;
        } else {
            fn = func_00238DE0;
        }
        break;
    case 7:
        if (flag) {
            fn = func_00238F00;
        } else {
            fn = func_00238FA0;
        }
        break;
    default:
        return arg1;
    }
    func_0011B518(entry->unk_08, n, 4, fn);
    return arg1;
}
