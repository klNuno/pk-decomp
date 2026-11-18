/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001E62D0_0 {
    s32 unk_00;
    u8 pad_04[4];
} unk_func_001E62D0_0;

typedef struct unk_func_001E62D0_1 {
    union {
        s32 unk_00;
        f32 unk_00_f32;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[8];
} unk_func_001E62D0_1;

unk_func_001E62D0_0 *fn_p_stEvalTree(s32, unk_func_001E62D0_0 *, unk_func_001E62D0_1 *);
s32 func_0011D3F8(s8 *);
s32 func_0011F0D0(s32);
s32 func_0019D550(f32);
void func_001E65B0(u8, s32, f32);
void func_001E6790(u8, s32, s32);
void func_001E6970(u8, s32, s32);
void func_001E6B50(u8, s32, s32);
void func_001E6D30(u8, s32, unk_func_001E62D0_1 *);
s8 *func_00208A60(s32);
extern s8 D_0034CA40[];
extern s8 D_0034CA48[];
extern s8 D_0034CA50[];
extern s8 D_0034CA58[];
extern s8 D_0034CA60[];

unk_func_001E62D0_0 *func_001E62D0(s32 arg0, unk_func_001E62D0_0 *arg1) {
    unk_func_001E62D0_1 temp;
    s8 *str = NULL;
    u8 n = 0;
    s32 op = arg1[-1].unk_00;
    u8 i;
    s8 c;
    s32 v;

    str = func_00208A60(op);
    n = (u8)func_0011D3F8(str);
    if (n != 0) {
        i = 0;
        for (i = 0; i < n; i++) {
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
            c = (s8)func_0011F0D0((s8)str[i]);
            if (c == *(s8 *)(u32)D_0034CA40) {
                if (temp.unk_0C == 8) {
                    v = func_0019D550(temp.unk_00.unk_00_f32);
                } else {
                    v = temp.unk_00.unk_00;
                }
                func_001E6970(i, arg0, v);
            } else if (c == *(s8 *)(u32)D_0034CA48) {
                func_001E65B0(i, arg0, temp.unk_0C == 8 ? temp.unk_00.unk_00_f32 : (f32)temp.unk_00.unk_00);
            } else if (c == *(s8 *)(u32)D_0034CA50) {
                func_001E6D30(i, arg0, &temp);
            } else if (c == *(s8 *)(u32)D_0034CA58) {
                func_001E6790(i, arg0, temp.unk_00.unk_00);
            } else if (c == *(s8 *)(u32)D_0034CA60) {
                func_001E6B50(i, arg0, temp.unk_00.unk_00);
            }
        }
    }
    return arg1;
}
