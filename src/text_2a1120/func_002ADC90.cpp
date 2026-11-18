#include "common.h"

class unk_func_002ADC90_0 {
public:
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    unk_func_002ADC90_0(f32 a, f32 b, f32 c, f32 d) {
        unk_00 = a;
        unk_04 = b;
        unk_08 = c;
        unk_0C = d;
    }
};

extern "C" {
void func_002AD610(unk_func_002ADC90_0 *);
void func_002ADC90(s32 arg0, s32 arg1);
}

void func_002ADC90(s32 arg0, s32 arg1) {
    unk_func_002ADC90_0 temp(arg0, arg1, 0.0f, 1.0f);

    func_002AD610(&temp);
}
