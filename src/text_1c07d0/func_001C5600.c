/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C5600_0 {
    u8 pad_00[2];
    u8 unk_02;
    u8 pad_03[2];
    u8 unk_05;
} unk_func_001C5600_0;

typedef struct unk_func_001C5600_1 {
    u16 unk_00;
    u16 unk_02;
} unk_func_001C5600_1;

typedef struct unk_func_001C5600_2 {
    unk_func_001C5600_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    unk_func_001C5600_1 *unk_10;
} unk_func_001C5600_2;

typedef struct unk_func_001C5600_3 {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52;
    u8 unk_53;
} unk_func_001C5600_3;

struct unk_func_001C5600_4;

typedef struct unk_func_001C5600_5 {
    u8 pad_00[8];
    struct unk_func_001C5600_4 *unk_08;
    struct unk_func_001C5600_4 *unk_0C;
    s32 unk_10;
} unk_func_001C5600_5;

typedef struct unk_func_001C5600_4 {
    u8 pad_00[0x14];
    struct unk_func_001C5600_4 *unk_14;
    struct unk_func_001C5600_4 *unk_18;
    unk_func_001C5600_5 *unk_1C;
} unk_func_001C5600_4;

typedef struct unk_func_001C5600_6 {
    unk_func_001C5600_4 *unk_00;
    unk_func_001C5600_4 *unk_04;
    struct unk_func_001C5600_6 *unk_08;
    unk_func_001C5600_4 **unk_0C;
    u8 pad_10[4];
} unk_func_001C5600_6;

s32 *HIE_fn_hGetSuperObjectObject(void *);
unk_func_001C5600_2 *func_00197880(s32);
void func_001979E0(void *, unk_func_001C5600_4 *);
void func_0019C440(unk_func_001C5600_6 **, s32);
s32 func_0019C710(s32);
unk_func_001C5600_6 *func_0019C730(s32);
unk_func_001C5600_6 *func_0019E2C0(s32);
void func_001ADD80(s32, unk_func_001C5600_6 *);
void func_001ADDB0(s32, unk_func_001C5600_6 *);
unk_func_001C5600_4 *func_001C4FF0(void);
void func_001C5240(unk_func_001C5600_4 *);
void func_001C5DE0(s32, s32);
void func_001C5E10(s32, unk_func_001C5600_1 *);
s32 func_001C5E40(s32);
unk_func_001C5600_1 *func_001C5E60(s32);
void func_001CBDC0(void *, unk_func_001C5600_2 *, unk_func_001C5600_3 *, u16);

#define UNLINK(p) \
    if ((p)->unk_14 != NULL) { \
        (p)->unk_14->unk_18 = (p)->unk_18; \
    } \
    if ((p)->unk_18 != NULL) { \
        (p)->unk_18->unk_14 = (p)->unk_14; \
    } \
    if ((p)->unk_1C != NULL) { \
        (p)->unk_1C->unk_10--; \
        if ((p)->unk_1C->unk_08 == (p)) { \
            (p)->unk_1C->unk_08 = (p)->unk_14; \
        } \
        if ((p)->unk_1C->unk_0C == (p)) { \
            (p)->unk_1C->unk_0C = (p)->unk_18; \
        } \
    } \
    (p)->unk_14 = NULL; \
    (p)->unk_18 = NULL; \
    (p)->unk_1C = NULL; \
    func_001C5240(p); \
    (p) = NULL

void func_001C5600(void *arg0, unk_func_001C5600_3 *arg1, u16 arg2) {
    unk_func_001C5600_6 *temp0;
    unk_func_001C5600_6 *temp1;
    unk_func_001C5600_0 *temp2;
    unk_func_001C5600_6 *temp3;
    s32 temp4 = 0;
    s32 temp5;
    unk_func_001C5600_1 *temp6;
    unk_func_001C5600_0 *temp7;
    unk_func_001C5600_6 *temp8;
    unk_func_001C5600_2 *spA4;
    unk_func_001C5600_1 *spA8;
    unk_func_001C5600_6 *spAC;
    s32 spB0;
    s32 spB4;

    if ((u16)arg1->unk_50 == 0) {
        return;
    }
    temp5 = *HIE_fn_hGetSuperObjectObject(arg0);
    spAC = func_0019C730(temp5);
    spA4 = func_00197880(temp5);
    spA8 = func_001C5E60(temp5);
    func_001CBDC0(arg0, spA4, arg1, arg2);
    temp2 = spA4->unk_00;
    temp6 = spA4->unk_10;
    if (spAC == NULL) {
        func_0019C440(&spAC, func_0019C710(temp5));
        func_001ADDB0(temp5, spAC);
        func_001ADD80(temp5, NULL);
    }

    if (spA8 != temp6) {
        spB0 = 1;
        if (spA8 != NULL) {
            spB4 = func_001C5E40(temp5);
            while (spB4--) {
                spAC[(u16)spA8->unk_00].unk_0C = NULL;
                spA8++;
            }
        }
        spB4 = spA4->unk_0C;
        func_001C5E10(temp5, temp6);
        func_001C5DE0(temp5, spB4);
        while (spB4--) {
            spAC[(u16)temp6->unk_00].unk_0C = (unk_func_001C5600_4 **)&spAC[(u16)temp6->unk_02];
            temp6++;
        }
    } else {
        spB0 = 0;
    }

    temp7 = temp2 + (u8)arg1->unk_53;
    if (temp2 == temp7) {
        temp1 = NULL;
    } else {
        temp4 = (u8)temp2->unk_02;
        temp1 = temp4 == 0xFF ? NULL : &spAC[temp4];
    }
    temp0 = func_0019E2C0(temp5);
    temp3 = NULL;
    while (temp1 != NULL || temp0 != NULL) {
        if (temp1 == temp0) {
            if (spB0) {
                if (temp0->unk_0C != NULL) {
                    if (*temp0->unk_0C == NULL) {
                        *temp0->unk_0C = func_001C4FF0();
                    }
                    func_001979E0(*temp0->unk_0C, temp0->unk_00);
                } else {
                    func_001979E0(arg0, temp0->unk_00);
                }
            }
            temp3 = temp0;
            temp0 = temp0->unk_08;
            temp2++;
            if (temp2 == temp7) {
                temp1 = NULL;
            } else {
                temp4 = (u8)temp2->unk_02;
                if (temp4 == 0xFF) {
                    temp8 = NULL;
                } else {
                    temp8 = &spAC[temp4];
                }
                temp1 = temp8;
            }
        } else if (temp0 == NULL || (temp1 != NULL && temp1 < temp0)) {
            if (temp1->unk_00 == NULL) {
                temp1->unk_00 = func_001C4FF0();
            }
            if (temp1->unk_0C != NULL) {
                if (*temp1->unk_0C == NULL) {
                    *temp1->unk_0C = func_001C4FF0();
                }
                func_001979E0(*temp1->unk_0C, temp1->unk_00);
            } else {
                func_001979E0(arg0, temp1->unk_00);
            }
            if (temp3 != NULL) {
                temp1->unk_08 = temp3->unk_08;
                temp3->unk_08 = temp1;
            } else {
                temp1->unk_08 = func_0019E2C0(temp5);
                func_001ADD80(temp5, temp1);
            }
            temp3 = temp1;
            temp2++;
            if (temp2 == temp7) {
                temp1 = NULL;
            } else {
                temp4 = (u8)temp2->unk_02;
                temp1 = temp4 == 0xFF ? NULL : &spAC[temp4];
            }
        } else if (temp1 == NULL || temp0 < temp1) {
            if (temp0->unk_04 != NULL) {
                UNLINK(temp0->unk_04);
            }
            UNLINK(temp0->unk_00);
            if (temp3 != NULL) {
                temp3->unk_08 = temp0->unk_08;
            } else {
                func_001ADD80(temp5, temp0->unk_08);
            }
            temp0 = temp0->unk_08;
        }
    }
    temp2 = spA4->unk_00;
    temp7 = temp2 + (u8)arg1->unk_53;
    while (temp2 != temp7) {
        temp2->unk_05 = 0;
        temp2++;
    }
}
