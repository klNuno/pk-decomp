#include "common.h"

typedef struct unk_func_002D5850_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002D5850_1;

typedef struct unk_func_002D5850_0 {
    u8 pad_00[0x10];
    unk_func_002D5850_1 *unk_10;
} unk_func_002D5850_0;

typedef struct unk_func_002D5850_2 {
    unk_func_002D5850_0 *unk_00;
} unk_func_002D5850_2;

inline bool operator!=(const unk_func_002D5850_2 &a, unk_func_002D5850_0 *b) {
    return a.unk_00 != b;
}

extern "C" {
s32 func_002CF830(s32, s32, s32);
void func_002CFEF0(unk_func_002D5850_2 *);
void func_002D2BB0(unk_func_002D5850_1 *);
unk_func_002D5850_0 *func_002D5840(void *);
void func_002D59E0(unk_func_002D5850_2 *, unk_func_002D5850_0 *);
unk_func_002D5850_2 *func_002D59F0(void *);
void func_002D5C40(unk_func_002D5850_2 *, void *, s32 *);
void func_002D5FA0(void *, unk_func_002D5850_2);
extern s32 D_007BE820[];

void func_002D5850(void *arg0) {
    unk_func_002D5850_2 sp5C;
    unk_func_002D5850_2 sp60;
    unk_func_002D5850_2 sp64;
    unk_func_002D5850_2 sp68;
    s32 sp6C;
    u32 count;
    unk_func_002D5850_1 *temp;
    s32 i;

    count = 0;
    sp5C = *func_002D59F0(arg0);
    while (sp5C != func_002D5840(arg0)) {
        temp = sp5C.unk_00->unk_10;
        switch (func_002CF830(temp->unk_00, temp->unk_04, temp->unk_08)) {
        case 0:
        case 1:
            break;
        case -1:
        case 2:
        case 3:
        default:
            D_007BE820[count++] = temp->unk_08;
            break;
        }
        if (count == 50) {
            break;
        }
        func_002CFEF0(&sp5C);
    }
    for (i = 0; i < count; i++) {
        sp6C = D_007BE820[i];
        func_002D5C40(&sp64, arg0, &sp6C);
        sp68 = sp64;
        func_002D59E0(&sp60, func_002D5840(arg0));
        if (sp68.unk_00 != sp60.unk_00) {
            func_002D2BB0(sp68.unk_00->unk_10);
            func_002D5FA0(arg0, sp68);
        }
    }
    if (count == 50) {
        func_002D5850(arg0);
    }
}
}
