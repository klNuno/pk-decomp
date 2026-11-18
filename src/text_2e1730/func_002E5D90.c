#include "common.h"

typedef struct unk_func_002E5D90_0 {
    u8 pad_00[4];
    struct unk_func_002E5D90_0 *unk_04;
    u8 unk_08[1];
} unk_func_002E5D90_0;

s32 func_002CF630(void *);
s32 func_002CFE00(void *);
void func_002D29C0(void *, void *, s32 *, s32 *);
unk_func_002E5D90_0 *func_002E5E30(void *);

void func_002E5D90(u8 *arg0, u8 *arg1) {
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    unk_func_002E5D90_0 *var_s0;
    u8 *temp_s1;
    temp_s1 = arg0 + 0x110;
    for (var_s0 = func_002E5E30(temp_s1)->unk_04; var_s0 != func_002E5E30(temp_s1); var_s0 = var_s0->unk_04) {
        sp44 = func_002CFE00(var_s0->unk_08);
        if (sp44 != 0) {
            sp48 = func_002CF630(arg1 + 4);
            func_002D29C0(&sp4C, arg1, &sp48, &sp44);
        }
    }
}
