#include "common.h"

typedef struct unk_func_00301230_0 {
    struct unk_func_00301230_0 *unk_00;
    struct unk_func_00301230_0 *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    s32 unk_10;
} unk_func_00301230_0;

void c4sdk_malloc(void *, s32);
void func_002CD2A0(void *, s32);
void func_002D2BB0(void *);
void func_00300F80(void *, s32);
void func_00301030(void *, s32);
s32 func_00301490(s32);
s32 func_003014A0(s32);
void func_00301230(s32, unk_func_00301230_0 *);

#define unk_0(arg0, arg1) { \
    unk_func_00301230_0 *temp_0 = (arg1); \
    if (temp_0 != NULL) { \
        if (temp_0->unk_00 != NULL) { \
            func_00301230(arg0, temp_0->unk_00); \
        } \
        if (temp_0->unk_04 != NULL) { \
            func_00301230(arg0, temp_0->unk_04); \
        } \
        func_003014A0(arg0); \
        func_00300F80(&temp_0->unk_0C, -1); \
        func_00301490(arg0 + 4); \
        func_002D2BB0(temp_0); \
    } \
}

#define unk_1(arg0, arg1) { \
    unk_func_00301230_0 *temp_1 = (arg1); \
    if (temp_1 != NULL) { \
        unk_0(arg0, temp_1->unk_00); \
        unk_0(arg0, temp_1->unk_04); \
        if (&temp_1->unk_0C != NULL) { \
            func_00301030(&temp_1->unk_10, -1); \
            func_002CD2A0(&temp_1->unk_0C, -1); \
        } \
        func_002D2BB0(temp_1); \
    } \
}

void func_00301230(s32 arg0, unk_func_00301230_0 *arg1) {
    unk_1(arg0, arg1->unk_00);
    unk_1(arg0, arg1->unk_04);
    if (&arg1->unk_0C != NULL) {
        func_00301030(&arg1->unk_10, -1);
        if (&arg1->unk_0C != NULL) {
            c4sdk_malloc(&arg1->unk_0C, 0);
        }
    }
    func_002D2BB0(arg1);
}
