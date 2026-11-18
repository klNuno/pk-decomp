/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
void func_00155FA0(void *, void *);
void *func_001979C0(s32);
void *func_00198B70(s32);
void func_0019AD50(s32);
s32 func_001A7D60(s32);
s32 func_001A7D80(void);
void func_002D4EF0(s32);

extern s32 D_0035F538;
extern s32 D_0035F53C;
extern s32 D_005ABDBC[];
extern u8 D_005ABDD0[];
extern u8 D_005ABE30[];
extern u8 D_005ACAD1[];

void func_00198910(s32 arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_s1;

    temp_s0 = func_001A7D60(func_001A7D80());
    D_005ACAD1[0] = 0;
    if (arg0 != 0 && temp_s0 != 0) {
        func_00155FA0(D_005ABDD0, func_00198B70(*HIE_fn_hGetSuperObjectObject(temp_s0)));
        temp_s1 = func_00198B70(*HIE_fn_hGetSuperObjectObject(temp_s0));
        func_00155FA0(temp_s1, func_001979C0(arg0));
        D_005ACAD1[0] = 1;
    } else if (temp_s0 != 0) {
        func_00155FA0(D_005ABDD0, func_00198B70(*HIE_fn_hGetSuperObjectObject(temp_s0)));
        D_005ACAD1[0] = 1;
    }
    if (arg1 != 0 && D_005ABDBC[0] != 0) {
        func_00155FA0(D_005ABE30, func_00198B70(*HIE_fn_hGetSuperObjectObject(D_005ABDBC[0])));
        temp_s1 = func_00198B70(*HIE_fn_hGetSuperObjectObject(D_005ABDBC[0]));
        func_00155FA0(temp_s1, func_001979C0(arg1));
        D_005ACAD1[0] = 1;
    } else if (D_005ABDBC[0] != 0) {
        func_00155FA0(D_005ABE30, func_00198B70(*HIE_fn_hGetSuperObjectObject(D_005ABDBC[0])));
        D_005ACAD1[0] = 1;
    }
    func_002D4EF0(D_0035F538);
    func_002D4EF0(D_0035F53C);
    func_0019AD50(8);
}
