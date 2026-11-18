/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
    u8 pad_08[0x18];
    void *unk_20;
} unk_func_001A3EF0_0;

typedef struct {
    u8 pad_00[0x80];
} unk_func_001A3EF0_1;

unk_func_001A3EF0_0 *HIE_fn_hGetSuperObjectObject(unk_func_001A3EF0_1 *);
unk_func_001A3EF0_1 *func_0012E2F0(s16);
unk_func_001A3EF0_1 *func_00199400(void *);
void *func_00199580(void);
void *func_00199590(void *, s32);
void func_001A3520(unk_func_001A3EF0_1 *, u8);
s16 func_001A3680(void);
s8 func_001A3690(void *);
void *func_001BE470(void *);
extern s32 D_003338C0[];
extern unk_func_001A3EF0_1 *D_003338D0[];
extern u32 *D_003338D8[];
extern u8 D_005AB7F8[];

void func_001A3EF0(u8 arg0) {
    volatile s8 temp = D_005AB7F8[0];
    void *var_s1 = func_00199580();
    unk_func_001A3EF0_1 *var_s0;
    u32 *var_s6;
    u32 *end;
    u32 *next;
    s16 count;
    s16 var_s2;

    while (var_s1 != NULL) {
        var_s0 = func_00199400(var_s1);
        func_001A3520(var_s0, arg0);
        var_s1 = func_00199590(var_s1, 1);
    }
    var_s0 = D_003338D0[0];
    var_s6 = D_003338D8[0];
    end = var_s6 + D_003338C0[0];
    while (var_s6 < end) {
        if (HIE_fn_hGetSuperObjectObject(var_s0)->unk_04 != NULL) {
            u8 arg;
            s32 var_s3 = 1;
            if (!arg0) {
                s32 var_s4 = 0;
                s32 var_s5 = 0;
                if (HIE_fn_hGetSuperObjectObject(var_s0)->unk_20 != NULL &&
                    func_001BE470(HIE_fn_hGetSuperObjectObject(var_s0)->unk_20) != NULL) {
                    var_s5 = 1;
                }
                if (var_s5 != 0) {
                    if (temp != func_001A3690(func_001BE470(HIE_fn_hGetSuperObjectObject(var_s0)->unk_20))) {
                        var_s4 = 1;
                    }
                }
                if (var_s4 == 0) {
                    var_s3 = 0;
                }
            }
            arg = (u8)var_s3;
            func_001A3520(var_s0, arg);
        }
        var_s0++;
        next = var_s6++;
    }
    count = func_001A3680();
    var_s2 = 0;
    while (var_s2 < count) {
        unk_func_001A3EF0_1 *arg = func_0012E2F0(var_s2);
        func_001A3520(arg, arg0);
        var_s2++;
    }
}
