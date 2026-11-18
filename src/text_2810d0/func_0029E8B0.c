#include "common.h"

typedef struct unk_func_0029E8B0_0 {
    s64 unk_00;
    s64 unk_08;
} unk_func_0029E8B0_0;

f32 int2dB__Fi();
void func_0029EA40(f32, f32, f32, f32);

void func_0029E8B0(unk_func_0029E8B0_0 *arg0) {
    func_0029EA40(int2dB__Fi(arg0->unk_00), int2dB__Fi(arg0->unk_08), 0.0f, 1.0f);
}
