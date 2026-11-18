/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00229C50_0 {
    u8 pad_00[0x14];
    struct unk_func_00229C50_0 *unk_14;
} unk_func_00229C50_0;

typedef struct {
    u8 pad_00[8];
    unk_func_00229C50_0 *unk_08;
    u8 pad_0C[0x10];
    void *unk_1C;
} unk_func_00229C50_1;

typedef struct {
    unk_func_00229C50_1 *unk_00;
    void *unk_04;
    u8 unk_08;
    f32 unk_0C[3];
} unk_func_00229C50_2;

s32 *HIE_fn_hGetSuperObjectObject();
void func_0012D450();
void func_0012D550();
void func_0012D940();
void func_0012DAE0();
void func_00139770();
void func_00139A90();
void func_00155810();
void func_00155E80();
void func_00155EC0();
void func_00155FA0();
s32 func_001979C0();
s32 func_0019C730();
void *func_001ACF40();
s32 func_001B84B0();

void func_00229C50(unk_func_00229C50_2 *arg0)
{
    unk_func_00229C50_0 *node;
    unk_func_00229C50_0 *next;
    unk_func_00229C50_1 *temp_s1;
    s32 temp_s3;
    s16 i;
    s32 temp_s5;
    void *temp_s6;
    s32 temp_s7;
    unk_func_00229C50_0 *first;
    f32 spA0[3], spB0[3];

    temp_s6 = func_001ACF40(func_0019C730(HIE_fn_hGetSuperObjectObject(arg0->unk_04)[0]), arg0->unk_08);
    if (temp_s6) {
        temp_s1 = arg0->unk_00;
        func_0012DAE0(temp_s6);
        func_0012DAE0(temp_s1->unk_1C);
        temp_s7 = HIE_fn_hGetSuperObjectObject(temp_s1)[2];
        temp_s5 = func_001979C0(temp_s6);
        temp_s3 = func_001979C0(temp_s1);
        func_00155810(&spA0, temp_s5, &arg0->unk_0C);
        func_00155EC0(temp_s5, &spB0);
        spA0[0] += spB0[0];
        spA0[1] += spB0[1];
        spA0[2] += spB0[2];
        if (temp_s7) {
            func_00139770(func_001B84B0(temp_s7), temp_s1, &spA0);
            func_00155FA0(temp_s3, temp_s5);
            func_00155E80(temp_s3, &spA0);
            func_00139A90(func_001B84B0(temp_s7), temp_s3);
            func_0012D940(temp_s1);
        } else {
            func_00155FA0(temp_s3, temp_s5);
            func_00155E80(temp_s3, &spA0);
            func_0012D940(temp_s1);
        }
        for (i = 0, node = temp_s1->unk_08, first = node; node != NULL;
             i++, next = node = node->unk_14, (void)next) {
            func_0012D450(node);
        }
        func_0012D550(temp_s1);
    }
}
