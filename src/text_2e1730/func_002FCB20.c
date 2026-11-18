/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002FCB20_1 {
    f32 unk_00[5];
    u8 unk_14[5];
    u8 pad_19[3];
    u32 unk_1C;
} unk_func_002FCB20_1;

typedef struct unk_func_002FCB20_0 {
    void *unk_00;
    u8 pad_04[8];
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    unk_func_002FCB20_1 unk_24;
    unk_func_002FCB20_1 unk_44;
} unk_func_002FCB20_0;

extern u8 D_0035EA60[];
s32 func_002FCCB0();
void func_002F23F0(unk_func_002FCB20_0 *, s32, s32);

unk_func_002FCB20_0 *func_002FCB20(unk_func_002FCB20_0 *arg0, s32 arg1) {
    u32 i;

    func_002F23F0(arg0, arg1, func_002FCCB0());
    arg0->unk_00 = D_0035EA60;
    arg0->unk_0C = 0.5f;
    arg0->unk_10 = 1.0f;
    arg0->unk_14 = 0.0f;
    arg0->unk_18 = 0.5f;
    arg0->unk_1C = 0.0f;
    arg0->unk_20 = 0.0f;
    arg0->unk_24.unk_1C = 0;
    arg0->unk_44.unk_1C = 0;
    for (i = 0; i < 5; i++) {
        arg0->unk_24.unk_00[i] = 0.0f;
        arg0->unk_24.unk_14[i] = 0;
        arg0->unk_44.unk_00[i] = 1.0f;
        arg0->unk_44.unk_14[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        if (arg0->unk_24.unk_14[i] != 1) {
            arg0->unk_24.unk_14[i] = 1;
            arg0->unk_24.unk_00[i] = 0.0f;
            if (arg0->unk_24.unk_1C <= i) {
                arg0->unk_24.unk_1C = i + 1;
            }
            break;
        }
    }
    for (i = 0; i < 5; i++) {
        if (arg0->unk_44.unk_14[i] != 1) {
            arg0->unk_44.unk_14[i] = 1;
            arg0->unk_44.unk_00[i] = 1.0f;
            if (arg0->unk_44.unk_1C <= i) {
                arg0->unk_44.unk_1C = i + 1;
            }
            break;
        }
    }
    arg0->unk_0C = 0.5f;
    arg0->unk_10 = 1.0f;
    arg0->unk_14 = 0.0f;
    arg0->unk_18 = 0.5f;
    return arg0;
}
