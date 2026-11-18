#include "common.h"

typedef struct unk_func_00134B20_0 {
    u8 unk_00;
    u8 pad_01[0x3];
    s32 unk_04;
    u8 pad_08[0x16];
    u8 unk_1E;
    u8 pad_1F[0x5];
    s16 unk_24;
    u8 unk_26;
    u8 pad_27[0x1];
    f32 unk_28[10];
    f32 unk_50[10];
    f32 unk_78[10];
    u8 pad_A0[0x8];
} unk_func_00134B20_0;

extern s32 D_0035F3A8;
extern unk_func_00134B20_0 D_00365030[];

s32 func_00134B20(s32 arg0, s16 arg1) {
    s16 i;
    s32 ok;
    u8 j;
    unk_func_00134B20_0 *e;

    for (i = 0; i <= D_0035F3A8; i++) {
        e = &D_00365030[i];
        if (e->unk_00 != 0 && e->unk_04 == arg0 && e->unk_24 == arg1) {
            ok = 1;
            for (j = 0; j < e->unk_26 && ok; j++) {
                if ((e->unk_50[j] - e->unk_78[j]) * (e->unk_50[j] - e->unk_28[j]) > 0.0f) {
                    ok = 0;
                }
            }
            if (e->unk_1E == 3 || !ok) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
