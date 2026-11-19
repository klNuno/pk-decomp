#include "common.h"

typedef struct unk_func_001E0C50_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001E0C50_1;

typedef struct unk_func_001E0C50_2 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001E0C50_2;

typedef struct unk_func_001E0C50_0 {
    u8 pad_00[0x14];
    unk_func_001E0C50_1 unk_14;
    f32 unk_20;
    u8 pad_24[0x10];
    unk_func_001E0C50_1 unk_34;
    u8 pad_40[0x234];
    unk_func_001E0C50_2 unk_274;
    u8 pad_280[0x8];
    f32 unk_288;
    u8 unk_28C;
} unk_func_001E0C50_0;

extern "C" {

f32 func_001E60E0(f32);

void func_001E0C50(unk_func_001E0C50_0 *arg0) {
    f32 len;
    f32 r;
    f32 t;
    unk_func_001E0C50_1 v;

    arg0->unk_288 = arg0->unk_20;
    arg0->unk_274 = *(unk_func_001E0C50_2 *)&arg0->unk_14;
    len = arg0->unk_34.unk_04;
    len = arg0->unk_34.unk_00 * arg0->unk_34.unk_00 + len * len + arg0->unk_34.unk_08 * arg0->unk_34.unk_08;
    if (len < 0.001f) {
        arg0->unk_28C = 0;
        return;
    }
    len = func_001E60E0(len);
    r = (len + 2.0f * arg0->unk_20) / 2.0f;
    t = (r - arg0->unk_20) / len;
    v.unk_00 = t * arg0->unk_34.unk_00;
    v.unk_04 = t * arg0->unk_34.unk_04;
    v.unk_08 = t * arg0->unk_34.unk_08;
    arg0->unk_14.unk_00 += v.unk_00;
    arg0->unk_14.unk_04 += v.unk_04;
    arg0->unk_14.unk_08 += v.unk_08;
    arg0->unk_20 = r;
    arg0->unk_28C = 1;
}

}
