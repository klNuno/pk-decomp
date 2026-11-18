/* profile: o0 */
#include "common.h"

typedef struct unk_func_001F5B00_2 {
    u8 pad_00[0x60];
    f32 unk_60;
    f32 unk_64;
} unk_func_001F5B00_2;

typedef struct unk_func_001F5B00_0 {
    u8 pad_00[0xC];
    unk_func_001F5B00_2 *unk_0C;
} unk_func_001F5B00_0;

typedef struct unk_func_001F5B00_1 {
    u8 pad_00[8];
    f32 unk_08;
} unk_func_001F5B00_1;

void func_001F5B00(unk_func_001F5B00_0 *arg0, unk_func_001F5B00_1 *arg1) {
    f32 temp = arg1->unk_08;

    if (temp > arg0->unk_0C->unk_64) {
        arg1->unk_08 = arg0->unk_0C->unk_64;
    }
    if (temp < arg0->unk_0C->unk_60) {
        arg1->unk_08 = arg0->unk_0C->unk_60;
    }
}
