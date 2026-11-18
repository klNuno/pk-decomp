/* profile: o0_301_p */
#include "common.h"

typedef union {
    f32 unk_00[3];
    s32 unk_00_1[3];
} unk_func_001BE710_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_001BE710_0 unk_08;
    void *unk_14;
} unk_func_001BE710_1;

typedef struct {
    u8 pad_00[4];
    void *unk_04;
    u8 pad_08[0x18];
    unk_func_001BE710_1 *unk_20;
    u8 pad_24[0x160];
    signed char unk_184 : 8;
} unk_func_001BE710_2;

unk_func_001BE710_2 *HIE_fn_hGetSuperObjectObject(void *);
s32 fn_ucIsAnAlwaysObject(unk_func_001BE710_2 *);
void func_0012DDD0(void *);
void func_001320E0(unk_func_001BE710_0 *, unk_func_001BE710_0 *, void **);
void func_00150060(void *, unk_func_001BE710_0 *, unk_func_001BE710_0 *, unk_func_001BE710_0 *);
void func_00155EC0(void *, unk_func_001BE710_0 *);
void func_00197900(void *, u8);
void *func_001979C0(void *);
void func_001979E0(void *, void *);
void func_00197B50(void *, void *);
s32 func_00197CC0(void *);
void func_001985A0(void *, void *, void *);
s32 func_001994C0(void *);
s32 func_001A7C90(void *);
s32 func_001AEF20(void *);
void func_001BE240(void *, void *);
void func_001BE540(void *, void *);
extern void *D_0035FF68;
extern void *D_0035FFD0;

void func_001BE710(void *arg0) {
    unk_func_001BE710_1 *temp;
    void *temp2;
    unk_func_001BE710_2 *temp3;
    void *temp4;
    unk_func_001BE710_0 temp5;
    unk_func_001BE710_0 temp6;
    unk_func_001BE710_0 temp7;
    unk_func_001BE710_0 temp8;
    unk_func_001BE710_0 temp9[2];

    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_20;
    if (temp->unk_14 != 0) {
        temp4 = HIE_fn_hGetSuperObjectObject(temp->unk_14)->unk_20->unk_00;
        temp2 = temp->unk_00;
        func_00155EC0(func_001979C0(arg0), &temp5);
    } else {
        func_00150060(func_001979C0(arg0), &temp9[0], &temp9[1], &temp8);
        temp8.unk_00[0] = 0.2f * temp8.unk_00[0];
        temp8.unk_00[1] = 0.2f * temp8.unk_00[1];
        temp8.unk_00[2] = 0.2f * temp8.unk_00[2];
        func_00155EC0(func_001979C0(arg0), &temp5);
        temp4 = temp->unk_00;
        temp2 = temp->unk_00;
        ((s32 *)temp6.unk_00_1)[0] = ((s32 *)temp5.unk_00_1)[0];
        ((s32 *)temp6.unk_00_1)[1] = ((s32 *)temp5.unk_00_1)[1];
        ((s32 *)temp6.unk_00_1)[2] = ((s32 *)temp5.unk_00_1)[2];
        ((s32 *)temp7.unk_00_1)[0] = ((s32 *)temp->unk_08.unk_00_1)[0];
        ((s32 *)temp7.unk_00_1)[1] = ((s32 *)temp->unk_08.unk_00_1)[1];
        ((s32 *)temp7.unk_00_1)[2] = ((s32 *)temp->unk_08.unk_00_1)[2];
        temp6.unk_00[0] += temp8.unk_00[0];
        temp6.unk_00[1] += temp8.unk_00[1];
        temp6.unk_00[2] += temp8.unk_00[2];
        temp7.unk_00[0] += temp8.unk_00[0];
        temp7.unk_00[1] += temp8.unk_00[1];
        temp7.unk_00[2] += temp8.unk_00[2];
        func_001320E0(&temp7, &temp6, &temp4);
    }
    if (temp4 != temp->unk_00) {
        if (arg0 == D_0035FFD0) {
            func_001BE540(temp->unk_00, temp4);
        }
        temp->unk_00 = temp4;
        if (fn_ucIsAnAlwaysObject(HIE_fn_hGetSuperObjectObject(arg0)) == 0 &&
            func_001994C0(arg0) == 0 &&
            func_001AEF20(arg0) == 0 &&
            (temp3 = HIE_fn_hGetSuperObjectObject(temp->unk_00), temp3->unk_184 != 1)) {
            func_0012DDD0(arg0);
            if ((u8)func_00197CC0(HIE_fn_hGetSuperObjectObject(arg0)->unk_04)) {
                func_00197B50(D_0035FF68, arg0);
            } else {
                func_001979E0(D_0035FF68, arg0);
            }
            func_00197900(HIE_fn_hGetSuperObjectObject(arg0)->unk_04, 0);
        }
        func_001BE240(temp->unk_00, arg0);
        if (func_001A7C90(arg0) != 0) {
            func_001985A0(arg0, temp->unk_00, temp2);
        }
    }
    ((s32 *)temp->unk_08.unk_00_1)[0] = ((s32 *)temp5.unk_00_1)[0];
    ((s32 *)temp->unk_08.unk_00_1)[1] = ((s32 *)temp5.unk_00_1)[1];
    ((s32 *)temp->unk_08.unk_00_1)[2] = ((s32 *)temp5.unk_00_1)[2];
}
