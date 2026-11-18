/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A8F70_0 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_func_002A8F70_0;

typedef struct unk_func_002A8F70_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A8F70_1;

void func_0029D8F0(s32, unk_func_002A8F70_1 *);
extern u8 D_007B8488[];
extern unk_func_002A8F70_1 D_007B8490;

void func_002A8F70(unk_func_002A8F70_0 *arg0) {
    f32 temp_00;
    f32 temp_04;
    f32 temp_08;

    temp_08 = arg0->unk_08 / 4294967296.0f;
    temp_04 = arg0->unk_04 / 4294967296.0f;
    temp_00 = arg0->unk_00 / 4294967296.0f;
    D_007B8490.unk_00 = temp_00;
    D_007B8490.unk_04 = temp_04;
    D_007B8490.unk_08 = temp_08;
    D_007B8490.unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
