#include "common.h"

typedef struct unk_func_00166D20_0 {
    u8 pad_00[0xC];
    f32 unk_0C;
    u8 pad_10[8];
    f32 unk_18;
    u8 pad_1C[8];
    f32 unk_24;
    u8 pad_28[8];
    f32 unk_30;
    u8 pad_34[0x1C];
} unk_func_00166D20_0;

typedef struct unk_func_00166D20_1 {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[4];
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[0x14];
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    u8 pad_40[0xC];
    s32 unk_4C;
    u8 pad_50[0x10];
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    s32 unk_70;
    f32 unk_74;
    u8 unk_78;
    u8 pad_79[0xB];
    s32 unk_84;
    unk_func_00166D20_0 unk_88[4];
} unk_func_00166D20_1;

void *HMU_fn_p_vMalloc();
void memset();
extern f32 D_0035FAC8;
extern s32 D_0035FACC;

void func_00166D20(unk_func_00166D20_1 **arg0) {
    unk_func_00166D20_1 *p;
    unk_func_00166D20_0 *end;
    unk_func_00166D20_0 *e;

    *arg0 = HMU_fn_p_vMalloc(0x1C8, 0);
    (*arg0)->unk_04 = 0;
    (*arg0)->unk_08 = 0.1f;
    (*arg0)->unk_0C = 0.1f;
    (*arg0)->unk_14 = 0.8f;
    (*arg0)->unk_18 = 0.8f;
    (*arg0)->unk_1C = 0.8f;
    (*arg0)->unk_34 = 1.0f;
    (*arg0)->unk_38 = 0.0f;
    (*arg0)->unk_3C = 1.0f;
    (*arg0)->unk_4C = 0;
    (*arg0)->unk_00 = -1;
    (*arg0)->unk_60 = 0;
    (*arg0)->unk_68 = 0;
    (*arg0)->unk_6C = 0;
    (*arg0)->unk_70 = 0;
    (*arg0)->unk_74 = D_0035FAC8;
    (*arg0)->unk_64 = D_0035FACC;
    (*arg0)->unk_78 = 0;
    p = *arg0;
    memset(p->unk_88, 0, sizeof(p->unk_88));
    p->unk_84 = 0;
    e = p->unk_88;
    for (end = e + 4; e < end; e++) {
        e->unk_0C = 1.0f;
        e->unk_18 = 1.0f;
        e->unk_24 = 1.0f;
        e->unk_30 = 1.0f;
    }
}
