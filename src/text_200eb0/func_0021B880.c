/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0021B880_0 {
    union {
        s8 unk_00;
        s32 unk_00_s32;
        f32 unk_00_f32;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021B880_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0021B880_0 *);
s32 *func_001EB830(s32 *);

#define UNK_FUNC_0021B880(arg) \
    ((arg)->unk_0C == 8 ? (arg)->unk_00.unk_00_f32 : (f32)(arg)->unk_00.unk_00_s32)

s32 *func_0021B880(s32 arg0, s32 *arg1, unk_func_0021B880_0 *arg2) {
    f32 temp;
    f32 temp2;
    f32 temp3;
    u8 temp4;
    s32 temp5;

    temp5 = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    if (temp5 == 0x2B) {
        temp4 = arg2->unk_00.unk_00;
    } else {
        temp = UNK_FUNC_0021B880(arg2);
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp2 = UNK_FUNC_0021B880(arg2);
        switch (temp5) {
        case 0x26:
            temp4 = (u8)(temp < temp2);
            break;
        case 0x27:
            temp4 = (u8)(temp > temp2);
            break;
        case 0x29:
            temp4 = (u8)(temp <= temp2);
            break;
        case 0x2A:
            temp4 = (u8)(temp >= temp2);
            break;
        case 0x28:
            temp4 = (u8)(temp == temp2);
            break;
        default:
            temp4 = 0;
            break;
        }
    }
    if (temp4) {
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp3 = UNK_FUNC_0021B880(arg2);
        arg1 = func_001EB830(arg1);
    } else {
        arg1 = func_001EB830(arg1);
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp3 = UNK_FUNC_0021B880(arg2);
    }
    arg2->unk_00.unk_00_f32 = temp3;
    arg2->unk_0C = 8;
    return arg1;
}
