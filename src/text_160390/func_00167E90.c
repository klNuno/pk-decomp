/* profile: opt_301 */
#include "common.h"

typedef struct unk_func_00167E90_0 {
    s32 unk_00;
    u8 pad_04[0x74];
    f32 unk_78;
    u8 pad_7C[0x4];
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
    u8 pad_8C[0x4];
    f32 unk_90;
    f32 unk_94;
} unk_func_00167E90_0;

typedef struct unk_func_00167E90_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00167E90_1;

void func_00167E90(unk_func_00167E90_0 *arg0, s32 arg1, unk_func_00167E90_1 *arg2, unk_func_00167E90_1 *arg3) {
    s32 big;
    unk_func_00167E90_1 *end;
    f32 scale;
    s32 i;

    end = arg3 + arg1;
    *(f32 *)&big = 8000.0f;
    switch (arg0->unk_00) {
    case 0x66:
    case 0x67:
        for (; arg3 < end; arg3++, arg2++) {
            if (*(s32 *)&arg2->unk_08 < *(s32 *)&arg0->unk_78) {
                *(s32 *)&arg3->unk_08 |= 0x80000000;
                *(s32 *)&arg3->unk_00 = big | ((*(s32 *)&arg2->unk_00 & 0x80000000) ^ 0x80000000);
                *(s32 *)&arg3->unk_04 = big | ((*(s32 *)&arg2->unk_04 & 0x80000000) ^ 0x80000000);
            } else {
                arg3->unk_08 = 1.0f / arg2->unk_08;
                scale = arg0->unk_80 * ((f32 *)arg3)[2];
                arg3->unk_08 *= 0.25f;
                arg3->unk_00 = arg0->unk_90 + scale * (arg2->unk_00 * arg0->unk_84);
                arg3->unk_04 = arg0->unk_94 + scale * (arg2->unk_04 * arg0->unk_88);
            }
        }
        break;
    case 0x64:
    case 0x65:
        for (i = 0; i < arg1; i++) {
            if (!(arg2[i].unk_08 < arg0->unk_78)) {
                arg3[i].unk_08 = 1.0f;
                arg3[i].unk_00 = arg0->unk_90 + arg0->unk_84 * arg2[i].unk_00;
                arg3[i].unk_04 = arg0->unk_94 + arg0->unk_88 * arg2[i].unk_04;
            }
        }
        break;
    }
}
