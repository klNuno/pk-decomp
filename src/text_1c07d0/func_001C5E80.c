/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C5E80_0 unk_func_001C5E80_0;

typedef struct {
    u8 pad_00[8];
    unk_func_001C5E80_0 *unk_08;
    unk_func_001C5E80_0 *unk_0C;
    s32 unk_10;
} unk_func_001C5E80_1;

struct unk_func_001C5E80_0 {
    u8 pad_00[0x14];
    unk_func_001C5E80_0 *unk_14;
    unk_func_001C5E80_0 *unk_18;
    unk_func_001C5E80_1 *unk_1C;
};

typedef struct unk_func_001C5E80_2 {
    unk_func_001C5E80_0 *unk_00;
    unk_func_001C5E80_0 *unk_04;
    struct unk_func_001C5E80_2 *unk_08;
    u8 pad_0C[8];
} unk_func_001C5E80_2;

typedef struct {
    u8 pad_00[0x58];
    s32 unk_58;
} unk_func_001C5E80_3;

typedef struct {
    u8 pad_00[0x50];
    unk_func_001C5E80_3 *unk_50;
} unk_func_001C5E80_4;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x14];
    s32 unk_1C;
} unk_func_001C5E80_5;

void HMU_fn_vFree(s32 *, s32);
s32 func_00136010(s32, s16);
unk_func_001C5E80_4 *func_00197860(s32);
unk_func_001C5E80_5 *func_00197880(s32);
void func_0019C580(unk_func_001C5E80_2 **);
unk_func_001C5E80_2 *func_0019C730(s32);
unk_func_001C5E80_2 *func_0019E2C0(s32);
void func_001ADD80(s32, s32);
void func_001ADDB0(s32, s32);
void func_001C2810(s32, s32);
void func_001C45C0(s32, u8);
void func_001C5240(unk_func_001C5E80_0 *);
void func_001C5DE0(s32, u32);
void func_001C5E10(s32, s32);
void func_001C9240(s32, s32, s32);
void func_001D4C30(s32);

#define UNK_REMOVE(p)                                       \
    if ((p) != NULL) {                                      \
        if ((p)->unk_14 != NULL) {                          \
            (p)->unk_14->unk_18 = (p)->unk_18;               \
        }                                                  \
        if ((p)->unk_18 != NULL) {                          \
            (p)->unk_18->unk_14 = (p)->unk_14;               \
        }                                                  \
        if ((p)->unk_1C != NULL) {                          \
            (p)->unk_1C->unk_10--;                          \
            if ((p)->unk_1C->unk_08 == (p)) {                \
                (p)->unk_1C->unk_08 = (p)->unk_14;           \
            }                                              \
            if ((p)->unk_1C->unk_0C == (p)) {                \
                (p)->unk_1C->unk_0C = (p)->unk_18;           \
            }                                              \
        }                                                  \
        (p)->unk_14 = NULL;                                 \
        (p)->unk_18 = NULL;                                 \
        (p)->unk_1C = NULL;                                 \
        func_001C5240(p);                                   \
        (p) = NULL;                                        \
    }

void func_001C5E80(s32 arg0, s32 *arg1)
{
    unk_func_001C5E80_2 *p;
    s32 unk_00;
    unk_func_001C5E80_3 *q;
    unk_func_001C5E80_2 *base;

    q = NULL;
    if (arg1 != NULL) {
        unk_00 = *arg1;
        if (func_00197860(unk_00) != NULL) {
            q = func_00197860(unk_00)->unk_50;
        }
        p = func_0019E2C0(unk_00);
        base = func_0019C730(unk_00);
        if (base != NULL) {
            for (; p != NULL; p = p->unk_08) {
                if (arg0 != 0 && q != NULL && q->unk_58 != 0) {
                    func_00136010(arg0, (s16)(p - base));
                }
                UNK_REMOVE(p->unk_04)
                UNK_REMOVE(p->unk_00)
            }
        }
        func_001C2810(unk_00, 0);
        if (arg0 != 0) {
            func_001C9240(arg0, 0, 1);
        }
        func_0019C580(&base);
        func_001ADDB0(unk_00, 0);
        func_001ADD80(unk_00, 0);
        func_001D4C30(unk_00);
        func_00197880(unk_00)->unk_1C = 0;
        if (func_00197880(unk_00)->unk_04 != 0) {
            HMU_fn_vFree(&func_00197880(unk_00)->unk_04, 1);
            func_00197880(unk_00)->unk_04 = 0;
        }
        func_001C5E10(unk_00, 0);
        func_001C5DE0(unk_00, 0);
        func_001C45C0(unk_00, 1);
        func_001C2810(unk_00, 0);
    }
}
