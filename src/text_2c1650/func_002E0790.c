#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} unk_func_002E0790_0;

void func_002DE7C0();
s32 func_002DE470();
s32 rand();
void func_002DE050(void *, f32);

void func_002E0790(s32 arg0, unk_func_002E0790_0 *arg1) {
    s32 temp[4];

    func_002DE7C0(temp, arg0);
    if (func_002DE470(temp) != 0) {
        f32 temp2 = arg1->unk_00;
        f32 temp3 = arg1->unk_04;
        func_002DE050(temp, temp2 + (temp3 - temp2) * ((f32)rand() / 2147483648.0f));
    }
}
