/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C8FA0_0 {
    u8 pad_00[0x5E];
    u8 unk_5E;
} unk_func_001C8FA0_0;

typedef struct unk_func_001C8FA0_1 {
    u8 pad_00[6];
    u16 unk_06;
    u8 pad_08[4];
} unk_func_001C8FA0_1;

s32 *HIE_fn_hGetSuperObjectObject();
s32 func_00197860();
s32 func_001A7060();
unk_func_001C8FA0_0 *func_001ABA70();
s8 func_001ABB40();
void func_001C46C0();
void func_001C91D0(s32, u8);
void func_001C9200();
s32 func_001CA410();
unk_func_001C8FA0_1 *func_001CBDA0();

void func_001C8FA0(s32 arg0, u16 arg1) {
    s32 s3;
    s32 s5;
    unk_func_001C8FA0_0 *s2;
    unk_func_001C8FA0_1 *s1;
    u8 i;
    unk_func_001C8FA0_1 *t;

    s3 = *HIE_fn_hGetSuperObjectObject(arg0);
    s5 = func_00197860(s3);
    if (s5 == 0) {
        return;
    }
    s2 = func_001ABA70(s5);
    s1 = func_001CBDA0(s2, arg1, func_001A7060(s3));
    if (s1 == NULL) {
        return;
    }
    func_001C9200(s3, s2->unk_5E);
    if (arg1) {
        for (i = 0; i < s2->unk_5E && s1[i].unk_06 < arg1; i++) {
        }
        func_001C91D0(s3, i);
    } else if (func_001ABB40(s5) > 0) {
        func_001C91D0(s3, 0);
    } else {
        func_001C91D0(s3, s2->unk_5E - 1);
    }
    for (i = 0; i < s2->unk_5E; i++, t = s1, s1 = t + 1) {
        func_001C46C0(s3, i, func_001CA410(s1));
    }
}
