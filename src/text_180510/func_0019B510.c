/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_0019B510_0;

typedef struct {
    u8 pad_00[0x60];
} __attribute__((aligned(16))) unk_0019B510_1;

typedef struct {
    void *unk_00;
    void *unk_04;
    u8 pad_08[8];
    void *unk_10;
    u8 pad_14[0xC];
    void **unk_20;
} unk_0019B510_2;

extern s32 D_0036016C;
extern s32 D_0035FEC0;
extern void *D_0035FF70;
extern u8 D_005AB880[];

char *strcpy(char *, const char *);
s32 StrICmp(const char *, const char *);
void func_0021F1E0(void);
char *func_001E6250(char *, s32);
void func_0019B0F0(char *);
void func_0019AD50(s32);
char *func_0019B0A0(void);
s32 func_0019AE60(char *);
u32 func_0019B0E0(void);
void *func_001A7D80(void);
void *func_001A7D60(void *);
unk_0019B510_1 *func_001D24E0(s32, s32);
unk_0019B510_2 *HIE_fn_hGetSuperObjectObject(void *);
void *HIE_fn_hGetSuperObjectFather(void *);
unk_0019B510_1 *func_001979C0(void *);
u8 func_00197CC0(void *);
void func_00197B50(void *, void *);
void func_001979E0(void *, void *);
void *func_00198B70(void *);
void func_00155FA0(void *, unk_0019B510_1 *);
void func_00197250(unk_0019B510_2 *, s32);
void func_0012D940(void *);
void func_001396A0(void *);
void *func_001AEC70(s32);
void func_001B4750(void *);
void func_001B5470(void *);
void func_001559E0(unk_0019B510_0 *, unk_0019B510_1 *, unk_0019B510_0 *);
void func_001FD890(void *, unk_0019B510_0 *);
void *func_00155EE0(unk_0019B510_1 *);
void func_001FD930(void *, void *, unk_0019B510_0 *);
void func_001FFF00(void *);
void func_001985A0(void *, void *, void *);
void func_0019AF90(char *);

void func_0019B510(char *arg0, u8 arg1) {
    char spA0[0x50];
    unk_0019B510_0 spF0 __attribute__((aligned(16)));
    unk_0019B510_0 sp100 __attribute__((aligned(16)));
    void *temp_s0;
    u8 i;
    void *temp_s2;
    unk_0019B510_1 *temp_s3;
    char *temp_s4;
    unk_0019B510_1 *temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    void *temp_fp;
    void *sp10C;

    D_0035FEC0 = 1;
    if (D_0036016C != 0) {
        func_0021F1E0();
        D_0036016C = 0;
    }
    strcpy(spA0, arg0);
    temp_s4 = func_001E6250(spA0, 0x24);
    if (temp_s4 == NULL) {
        func_0019B0F0(arg0);
        func_0019AD50(6);
        return;
    }
    *temp_s4++ = 0;
    if (StrICmp(spA0, func_0019B0A0()) != 0) {
        func_0019B0F0(arg0);
        func_0019AD50(6);
        return;
    }
    temp_s6 = func_0019AE60(temp_s4);
    if (temp_s6 != ((func_0019B0E0() & 0xFFFF0000U) >> 16)) {
        temp_s2 = func_001A7D60(func_001A7D80());
        ++temp_s4;
        temp_s4 = func_001E6250(temp_s4, 0x24);
        if (temp_s4 == NULL) {
            temp_s7 = 0;
        } else {
            ++temp_s4;
            temp_s7 = func_0019AE60(temp_s4);
        }
        temp_s5 = func_001D24E0(temp_s6, temp_s7);
        if (temp_s5 != NULL) {
            temp_fp = *HIE_fn_hGetSuperObjectObject(temp_s2)->unk_20;
            temp_s3 = func_001979C0(temp_s2);
            *temp_s3 = *temp_s5;
            if (HIE_fn_hGetSuperObjectFather(temp_s2) != D_0035FF70) {
                if (func_00197CC0(HIE_fn_hGetSuperObjectObject(temp_s2)->unk_04) != 0) {
                    func_00197B50(D_0035FF70, temp_s2);
                } else {
                    func_001979E0(D_0035FF70, temp_s2);
                }
            }
            func_00155FA0(func_00198B70(HIE_fn_hGetSuperObjectObject(temp_s2)->unk_00), temp_s3);
            func_00197250(HIE_fn_hGetSuperObjectObject(temp_s2), 3);
            func_0012D940(temp_s2);
            func_001396A0(temp_s2);
            for (i = 0; i < D_005AB880[0]; ++i) {
                temp_s0 = func_001AEC70(i);
                func_001B4750(HIE_fn_hGetSuperObjectObject(temp_s0)->unk_10);
                func_001B5470(HIE_fn_hGetSuperObjectObject(temp_s0)->unk_10);
                spF0.unk_00 = 0.0f;
                spF0.unk_04 = 2.0f;
                spF0.unk_08 = 2.0f;
                func_001559E0(&spF0, temp_s3, &spF0);
                func_001FD890(temp_s0, &spF0);
                sp100.unk_00 = 0.0f;
                sp100.unk_04 = 0.0f;
                sp100.unk_08 = 1.0f;
                func_001FD930(temp_s0, func_00155EE0(temp_s3), &sp100);
                func_001FFF00(temp_s0);
            }
            sp10C = *HIE_fn_hGetSuperObjectObject(temp_s2)->unk_20;
            if (sp10C != temp_fp) {
                func_001985A0(temp_s2, sp10C, temp_fp);
                func_0019AF90(arg0);
            } else {
                func_0019B0F0(arg0);
                func_0019AD50(6);
            }
        }
    }
}
