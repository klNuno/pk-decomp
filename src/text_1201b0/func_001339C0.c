#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001339C0_0;

s32 func_0031A210(void);
void func_0031A360(s32);
s32 func_0031A370(s32);

void func_001339C0(unk_func_001339C0_0 *arg0) {
    s32 temp_s0 = func_0031A210();
    s32 temp_s1 = arg0->unk_00;

    if (func_0031A370(temp_s1) == temp_s1) {
        arg0->unk_04 = temp_s0;
        arg0->unk_08 = 0;
    } else if (temp_s0 == arg0->unk_04) {
        arg0->unk_08++;
    } else {
        func_0031A360(temp_s1);
        arg0->unk_04 = temp_s0;
        arg0->unk_08 = 0;
    }
}
