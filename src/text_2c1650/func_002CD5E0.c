#include "common.h"

void int2dB__Fi();
extern s64 D_00341700[];

void func_002CD5E0(s32 arg0) {
    if (arg0 < 0) {
        arg0 = 0;
    }
    if (arg0 > 0x7F) {
        arg0 = 0x7F;
    }
    int2dB__Fi(D_00341700[arg0]);
}
