/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C6400_0 {
    u8 pad_00[8];
    struct unk_func_001C6400_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_001C6400_0 *unk_14;
} unk_func_001C6400_0;

u32 func_001971C0(unk_func_001C6400_0 *);
s32 func_001979C0(unk_func_001C6400_0 *);
unk_func_001C6400_0 *HIE_fn_hGetSuperObjectFather(unk_func_001C6400_0 *);
s32 func_001979A0(unk_func_001C6400_0 *);
void func_00153920(s32, s32, s32);

void func_001C6400(unk_func_001C6400_0 *arg0) {
    unk_func_001C6400_0 *var_s0;
    unk_func_001C6400_0 *var_s4;
    u32 temp_s3;
    unk_func_001C6400_0 *var_s1;
    s32 var_s2;

    temp_s3 = func_001971C0(arg0);
    if (temp_s3 & 0x19) {
        func_00153920(func_001979C0(arg0), func_001979C0(HIE_fn_hGetSuperObjectFather(arg0)), func_001979A0(arg0));
    } else {
        return;
    }
    {
        var_s2 = 0;
        var_s4 = var_s0 = arg0->unk_08;
        while (var_s0 != NULL) {
            func_001C6400(var_s0);
            var_s2++;
            var_s1 = var_s0 = var_s0->unk_14;
            (void)var_s1;
        }
    }
}
