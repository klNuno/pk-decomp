#include "common.h"

typedef struct unk_func_002ADC40_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADC40_0;

void func_002AD610(unk_func_002ADC40_0 *);

void func_002ADC40(s16 *arg0) {
    unk_func_002ADC40_0 sp10;

    sp10.unk_00 = arg0[0];
    sp10.unk_04 = arg0[1];
    sp10.unk_0C = 1.0f;
    sp10.unk_08 = 0.0f;
    func_002AD610(&sp10);
}
