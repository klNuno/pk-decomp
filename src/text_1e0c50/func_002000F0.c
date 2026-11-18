/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_002000F0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0xC];
    s32 unk_14;
} unk_func_002000F0_0;

unk_func_002000F0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0012C650(f32 *, f32 *, s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
s32 func_0019ABC0(s32);
s32 func_001A1F30(s32);
u8 func_001B6CF0(s32);

s32 func_002000F0(f32 *arg0, f32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 obj;
    s32 node;
    s32 s2;
    s32 s3;
    s32 next;
    s32 i;
    u8 s6;
    s32 first;
    f32 sp[3];

    s6 = func_001B6CF0(HIE_fn_hGetSuperObjectObject(arg3)->unk_14);
    sp[0] = arg1[0] - arg0[0];
    sp[1] = arg1[1] - arg0[1];
    sp[2] = arg1[2] - arg0[2];
    i = 0;
    first = node = func_00198540(arg2);
    while (node != 0) {
        obj = func_00198500(node);
        s2 = HIE_fn_hGetSuperObjectObject(obj)->unk_14;
        s3 = HIE_fn_hGetSuperObjectObject(obj)->unk_04;
        if (((s2 != 0 && s6 == func_001B6CF0(s2)) || (s3 != 0 && (func_0019ABC0(s3) & 0x2000000))) &&
            func_001A1F30(obj) != 0 && func_0012C650(arg0, sp, obj) != 0) {
            return 1;
        }
        i++;
        next = node = func_00198520(node), next = next;
    }
    return 0;
}
