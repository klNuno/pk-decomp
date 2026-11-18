#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A10C0_0;

void func_0029D8F0(s32, void *);
extern u8 D_007B8488[];
extern u8 D_007B84D0[];
extern unk_func_002A10C0_0 *D_007B84F4[];

void func_002A10C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    D_007B84F4[0]->unk_00 = arg0;
    D_007B84F4[0]->unk_04 = arg1;
    D_007B84F4[0]->unk_08 = arg2;
    D_007B84F4[0]->unk_0C = arg3;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
