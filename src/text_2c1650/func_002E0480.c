#include "common.h"

typedef struct unk_func_002E0480_0 {
    f32 unk_00;
    f32 unk_04;
} unk_func_002E0480_0;

void func_002DE7C0();
s32 func_002DE470();
f32 func_00115A58(f32, f32);
void func_002DE050(void *, f32);

void func_002E0480(s32 arg0, unk_func_002E0480_0 *arg1) {
    s32 temp[4];

    func_002DE7C0(temp, arg0);
    if (func_002DE470(temp) != 0) {
        f32 temp2 = arg1->unk_00;
        f32 temp3 = arg1->unk_04;
        if (temp3 == 0.0f) {
            func_002DE050(temp, 0.0f);
        } else {
            func_002DE050(temp, func_00115A58(temp2, temp3));
        }
    }
}
