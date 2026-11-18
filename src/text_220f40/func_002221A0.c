/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002221A0_0;

void func_002221A0(u8 arg0, unk_func_002221A0_0 *arg1, f32 arg2) {
    switch (arg0) {
    case 1:
        arg1->unk_00 = arg2;
        break;
    case 2:
        arg1->unk_04 = arg2;
        break;
    case 3:
        arg1->unk_08 = arg2;
        break;
    }
}
