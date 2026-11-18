/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 unk_04;
} unk_func_001EC210_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    unk_func_001EC210_1 *unk_10;
} unk_func_001EC210_0;

u8 func_001E6FA0();
s32 func_001E7850(void *, u8);
void func_001E7680();

void func_001EC210(unk_func_001EC210_0 *arg0) {
    u8 temp;

    temp = func_001E6FA0(arg0, 0);
    if (temp < arg0->unk_10->unk_04) {
        arg0->unk_04 = func_001E7850(arg0, temp);
        func_001E7680(arg0);
    }
}
