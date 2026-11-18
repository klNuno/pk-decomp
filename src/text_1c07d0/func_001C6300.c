/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C6300_0 {
    s32 unk_00;
    s32 unk_04;
    struct unk_func_001C6300_0 *unk_08;
} unk_func_001C6300_0;

typedef struct unk_func_001C6300_1 {
    u8 pad_00[0x50];
    s32 unk_50;
} unk_func_001C6300_1;

void func_00176750(s32);
unk_func_001C6300_1 *func_00197860(s32);
s32 func_0019C730(s32);
unk_func_001C6300_0 *func_0019E2C0(s32);

void func_001C6300(s32 arg0, s32 *arg1) {
    unk_func_001C6300_0 *var_s0;
    s32 temp_s1;
    s32 var_s2;
    s32 var_s3;

    var_s2 = 0;
    if (arg1 != NULL) {
        temp_s1 = *arg1;
        if (func_00197860(temp_s1) != NULL) {
            var_s2 = func_00197860(temp_s1)->unk_50;
        }
        var_s0 = func_0019E2C0(temp_s1);
        var_s3 = func_0019C730(temp_s1);
        if (var_s3 != 0) {
            while (var_s0 != NULL) {
                if (var_s0->unk_04 != 0) {
                    func_00176750(var_s0->unk_04);
                }
                if (var_s0->unk_00 != 0) {
                    func_00176750(var_s0->unk_00);
                }
                var_s0 = var_s0->unk_08;
            }
        }
    }
}
