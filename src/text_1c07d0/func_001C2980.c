/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
} unk_func_001C2980_0;

typedef struct {
    u8 pad_00[0x50];
    unk_func_001C2980_0 *unk_50;
} unk_func_001C2980_1;

extern void **HIE_fn_hGetSuperObjectObject(void *);
extern unk_func_001C2980_1 *func_00197860(void *);
extern s32 func_0019D550(f32);
extern void func_001A1670(void *, f32);
extern u16 func_001A7080(void *);
extern u32 func_001A70C0(void *);
extern void func_001A7B70(void *, u16);
extern unk_func_001C2980_1 *func_001ABAC0(unk_func_001C2980_1 *);
extern u16 func_001C03C0(void *);
extern void func_001C2810(void *, s32);
extern u32 func_001C2910(void *);
extern void func_001C2EA0(void *, s32);
extern u8 func_001C2ED0(void *);
extern void func_001C2EF0(void *, s32);
extern s32 func_001C2F20(void *);
extern void func_001C2F40(void *, s32);
extern f32 func_001C2F70(void *);
extern s32 D_0035FFD4;
extern u32 D_005AB800[];

void func_001C2980(void *arg0) {
    void *temp0;
    unk_func_001C2980_0 *temp1;
    unk_func_001C2980_1 *temp2;
    u16 temp3;
    f32 temp4;

    temp0 = *HIE_fn_hGetSuperObjectObject(arg0);
    temp2 = func_00197860(temp0);
    if (temp2 != NULL) {
        temp1 = temp2->unk_50;
        if (temp1 != NULL && func_001A70C0(temp0) != 0) {
            if (D_0035FFD4 != 0) {
                temp4 = 1.0f + func_001C2F70(temp0);
            } else {
                temp4 = ((f32)func_001A70C0(temp0) * (f32)(D_005AB800[0] - func_001C2910(temp0))) / 1000.0f;
            }
            temp3 = (u16)((s16)(u16)func_0019D550(temp4) - (s16)func_001C03C0(temp0));
            func_001A7B70(temp0, temp3 + func_001A7080(temp0));
            if (!(temp4 <= (f32)temp1->unk_50)) {
                func_001C2F40(temp0, func_0019D550((f32)D_005AB800[0] -
                    1000.0f * ((f32)temp1->unk_50 / (f32)func_001A70C0(temp0)) -
                    (f32)func_001C2910(temp0)));
                temp4 = (f32)temp1->unk_50;
            } else {
                func_001C2F40(temp0, 0);
            }
            if (temp1->unk_50 == 1 && func_001C2F20(temp0) == 0 && func_001ABAC0(temp2) == temp2) {
                func_001C2810(temp0, 1);
                func_001A1670(temp0, 0.0f);
            } else {
                func_001A1670(temp0, temp4);
            }
            if (temp1->unk_50 == func_001C03C0(temp0)) {
                func_001C2EF0(temp0, 1);
            }
            if (func_001C2ED0(temp0) == 0) {
                if (temp1->unk_50 == func_001C03C0(temp0) && func_001ABAC0(temp2) == NULL) {
                    func_001C2EA0(temp0, 1);
                }
            }
        }
    }
}
