#include "common.h"

typedef struct unk_func_002F3570_0 {
    struct unk_func_002F3570_0 *unk_00;
    struct unk_func_002F3570_0 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    u8 unk_10[4];
} unk_func_002F3570_0;

typedef struct unk_func_002F3570_1 {
    u8 pad_00[4];
    u8 unk_04[4];
} unk_func_002F3570_1;

void c4sdk_malloc(void *, s32);
void func_002CD2A0(void *, s32);
void func_002D2BB0(void *);
void func_002F2490(void *, s32);
void func_002F2560(void *, s32);
void func_002F37D0(void *);
void func_002F37E0(unk_func_002F3570_1 *);

void func_002F3570(unk_func_002F3570_1 *arg0, unk_func_002F3570_0 *arg1);

#define LEVEL3(n)                                   \
    if ((n)->unk_00 != NULL) {                      \
        func_002F3570(arg0, (n)->unk_00);           \
    }                                               \
    if ((n)->unk_04 != NULL) {                      \
        func_002F3570(arg0, (n)->unk_04);           \
    }                                               \
    func_002F37E0(arg0);                            \
    func_002F2560((n)->unk_0C, -1);                 \
    func_002F37D0(arg0->unk_04);                    \
    func_002D2BB0(n);

#define LEVEL2(n)                                   \
    s3 = (n)->unk_00;                               \
    if (s3 != NULL) {                               \
        LEVEL3(s3)                                  \
    }                                               \
    s3 = (n)->unk_04;                               \
    if (s3 != NULL) {                               \
        LEVEL3(s3)                                  \
    }                                               \
    if ((n)->unk_0C != NULL) {                      \
        func_002F2490((n)->unk_10, -1);             \
        func_002CD2A0((n)->unk_0C, -1);             \
    }                                               \
    func_002D2BB0(n);

void func_002F3570(unk_func_002F3570_1 *arg0, unk_func_002F3570_0 *arg1) {
    unk_func_002F3570_0 *s2;
    unk_func_002F3570_0 *s3;

    s2 = arg1->unk_00;
    if (s2 != NULL) {
        LEVEL2(s2)
    }
    s2 = arg1->unk_04;
    if (s2 != NULL) {
        LEVEL2(s2)
    }
    if (arg1->unk_0C != NULL) {
        func_002F2490(arg1->unk_10, -1);
        if (arg1->unk_0C != NULL) {
            c4sdk_malloc(arg1->unk_0C, 0);
        }
    }
    func_002D2BB0(arg1);
}
