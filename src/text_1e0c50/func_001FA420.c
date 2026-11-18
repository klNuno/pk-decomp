/* profile: o0_301 */
#include "common.h"

typedef struct { u8 pad_00[0x74]; u8 unk_74; } unk_func_001FA420_0;
typedef struct { f32 unk_00, unk_04, unk_08; } unk_func_001FA420_1;

typedef struct { s32 unk_00, unk_04, unk_08; } unk_func_001FA420_2;

typedef union {
    unk_func_001FA420_1 unk_00_f32;
    unk_func_001FA420_2 unk_00_s32;
} unk_func_001FA420_3;

void func_001B4D70(unk_func_001FA420_0 *);

void func_001FA420(unk_func_001FA420_0 *arg0, unk_func_001FA420_3 *arg1,
                   unk_func_001FA420_3 *arg2, unk_func_001FA420_3 *arg3,
                   unk_func_001FA420_3 *arg4, s32 arg5, s32 arg6,
                   unk_func_001FA420_3 *arg7) {
    unk_func_001FA420_3 temp;

    temp.unk_00_f32.unk_08 = temp.unk_00_f32.unk_04 = temp.unk_00_f32.unk_00 = 0.0f;

    if (arg5 == 1) {
        func_001B4D70(arg0);
        arg2 = arg4;
    }
    switch (arg6) {
    case -1:
        ((unk_func_001FA420_2 *)&temp)->unk_00 = arg1->unk_00_s32.unk_00;
        ((unk_func_001FA420_2 *)&temp)->unk_04 = arg1->unk_00_s32.unk_04;
        ((unk_func_001FA420_2 *)&temp)->unk_08 = arg1->unk_00_s32.unk_08;
        break;
    case 0:
        if (arg0->unk_74 & 1) {
            temp.unk_00_f32.unk_00 = arg4->unk_00_f32.unk_00 + arg7->unk_00_f32.unk_00;
            temp.unk_00_f32.unk_04 = arg4->unk_00_f32.unk_04 + arg7->unk_00_f32.unk_04;
            temp.unk_00_f32.unk_08 = arg4->unk_00_f32.unk_08 + arg7->unk_00_f32.unk_08;
        } else {
            temp.unk_00_f32.unk_00 = arg2->unk_00_f32.unk_00 + arg7->unk_00_f32.unk_00;
            temp.unk_00_f32.unk_04 = arg2->unk_00_f32.unk_04 + arg7->unk_00_f32.unk_04;
            temp.unk_00_f32.unk_08 = arg2->unk_00_f32.unk_08 + arg7->unk_00_f32.unk_08;
        }
        break;
    case 1:
        ((unk_func_001FA420_2 *)&temp)->unk_00 = arg7->unk_00_s32.unk_00;
        ((unk_func_001FA420_2 *)&temp)->unk_04 = arg7->unk_00_s32.unk_04;
        ((unk_func_001FA420_2 *)&temp)->unk_08 = arg7->unk_00_s32.unk_08;
        break;
    }
    arg2->unk_00_s32.unk_00 = ((unk_func_001FA420_2 *)&temp)->unk_00;
    arg2->unk_00_s32.unk_04 = ((unk_func_001FA420_2 *)&temp)->unk_04;
    arg2->unk_00_s32.unk_08 = ((unk_func_001FA420_2 *)&temp)->unk_08;
    if (arg5 != 1) {
        arg3->unk_00_s32.unk_00 = ((unk_func_001FA420_2 *)&temp)->unk_00;
        arg3->unk_00_s32.unk_04 = ((unk_func_001FA420_2 *)&temp)->unk_04;
        arg3->unk_00_s32.unk_08 = ((unk_func_001FA420_2 *)&temp)->unk_08;
        arg4->unk_00_s32.unk_00 = ((unk_func_001FA420_2 *)&temp)->unk_00;
        arg4->unk_00_s32.unk_04 = ((unk_func_001FA420_2 *)&temp)->unk_04;
        arg4->unk_00_s32.unk_08 = ((unk_func_001FA420_2 *)&temp)->unk_08;
    }
}
