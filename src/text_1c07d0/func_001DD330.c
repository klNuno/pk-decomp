#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001DD330_1;

typedef struct {
    u8 pad_00[0x4];
    s16 unk_04;
    u8 pad_06[0x2];
    unk_func_001DD330_1 *unk_08;
    u8 pad_0C[0xC];
    s32 unk_18;
    s32 unk_1C;
    unk_func_001DD330_1 unk_20;
} unk_func_001DD330_0;

void func_001DCAE0(unk_func_001DD330_0 *, unk_func_001DD330_1 *, s32 *);
void func_001DD3E0(unk_func_001DD330_0 *, s16);
void func_001DDA40(unk_func_001DD330_0 *, s16);

void func_001DD330(unk_func_001DD330_0 *arg0) {
    s16 i;

    if (arg0->unk_04 != 0) {
        if (arg0->unk_18 == 0) {
            func_001DDA40(arg0, arg0->unk_04);
        }
        for (i = 0; i < arg0->unk_04; i++) {
            func_001DD3E0(arg0, i);
        }
    }
    arg0->unk_20 = *arg0->unk_08;
    arg0->unk_1C = 0;
    func_001DCAE0(arg0, &arg0->unk_20, &arg0->unk_1C);
}
