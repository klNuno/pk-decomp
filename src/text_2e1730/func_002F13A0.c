#include "common.h"

typedef struct unk_func_002F13A0_0 {
    struct unk_func_002F13A0_0 *unk_00;
    struct unk_func_002F13A0_0 *unk_04;
    void *unk_08;
    u8 pad_0C[4];
    u8 unk_10[8];
    u8 unk_18;
} unk_func_002F13A0_0;

typedef struct unk_func_002F13A0_1 {
    unk_func_002F13A0_0 *unk_00;
} unk_func_002F13A0_1;

typedef struct unk_func_002F13A0_2 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[8];
} unk_func_002F13A0_2;

typedef struct unk_func_002F13A0_3 {
    u8 pad_00[0x10];
} unk_func_002F13A0_3;

typedef struct unk_func_002F13A0_4 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002F13A0_4;

void func_002CFED0(unk_func_002F13A0_3 *);
void func_002CF5C0(unk_func_002F13A0_3 *, s32);
unk_func_002F13A0_0 *func_002CF800(unk_func_002F13A0_3 *);
void func_002CF7E0(unk_func_002F13A0_1 *, unk_func_002F13A0_0 *);
void func_002CF7F0(unk_func_002F13A0_1 *, unk_func_002F13A0_0 *);
void func_002CFEF0(unk_func_002F13A0_1 *);
void func_002D29C0(unk_func_002F13A0_1 *, unk_func_002F13A0_3 *, unk_func_002F13A0_1 *, void *);
void func_002CD2A0(void *, s32);
void func_002F11C0(void *, s32 *);
unk_func_002F13A0_0 *func_002F12A0(u8 *);
unk_func_002F13A0_0 *func_002F1280(u8 *);
void func_002F1290(unk_func_002F13A0_1 *, unk_func_002F13A0_0 *);
unk_func_002F13A0_0 *func_002F1270(u8 *);
unk_func_002F13A0_0 *func_002F1260(u8 *);
unk_func_002F13A0_4 *func_002F1790(u8 *, u8 *);
void func_002F1A40(void *, u8 *, unk_func_002F13A0_2 *);

void func_002F13A0(u8 *arg0, u8 *arg1) {
    unk_func_002F13A0_2 sp40;
    unk_func_002F13A0_3 sp50;
    unk_func_002F13A0_1 sp60[2];
    unk_func_002F13A0_1 sp6C;
    unk_func_002F13A0_1 sp70;
    unk_func_002F13A0_1 sp74;
    unk_func_002F13A0_1 sp78;
    unk_func_002F13A0_1 sp7C;
    u8 *sp80;
    unk_func_002F13A0_1 sp84;
    unk_func_002F13A0_1 sp88;
    unk_func_002F13A0_1 sp8C;
    u8 *sp90;
    unk_func_002F13A0_1 sp94;
    unk_func_002F13A0_1 sp98;
    unk_func_002F13A0_1 sp9C;
    unk_func_002F13A0_1 spA0;
    unk_func_002F13A0_1 spA4;
    unk_func_002F13A0_1 spA8;
    unk_func_002F13A0_1 spAC;
    s32 *temp;
    u8 *temp_s2;
    unk_func_002F13A0_0 *temp_n;

    func_002CFED0(&sp50);
    func_002F1290(&sp7C, func_002F12A0(arg1));
    sp84.unk_00 = sp7C.unk_00;
    while (func_002F1290(&sp78, func_002F1280(arg1)), sp84.unk_00 != sp78.unk_00) {
        sp80 = sp84.unk_00->unk_10;
        if (sp80[8] == 0) {
            func_002CF7E0(&spA0, func_002CF800(&sp50));
            func_002D29C0(&spA4, &sp50, &spA0, &sp80);
        }
        func_002CFEF0(&sp84);
    }
    func_002F1290(&sp8C, func_002F12A0(arg1));
    sp94.unk_00 = sp8C.unk_00;
    while (func_002F1290(&sp88, func_002F1280(arg1)), sp94.unk_00 != sp88.unk_00) {
        sp90 = sp94.unk_00->unk_10;
        if (sp90[8] != 0) {
            func_002CF7E0(&spA8, func_002CF800(&sp50));
            func_002D29C0(&spAC, &sp50, &spA8, &sp90);
        }
        func_002CFEF0(&sp94);
    }
    func_002CF7F0(&sp98, func_002CF800(&sp50)->unk_04);
    sp74.unk_00 = sp98.unk_00;
    sp6C = sp74;
    while (func_002CF7E0(&sp9C, func_002CF800(&sp50)), sp6C.unk_00 != sp9C.unk_00) {
        temp = (s32 *)sp6C.unk_00->unk_08;
        sp40.unk_00 = *temp;
        func_002F11C0(&sp40.unk_04, temp);
        func_002F1A40(sp60, arg0, &sp40);
        if (&sp40.unk_04 != 0) {
            func_002CD2A0(sp40.unk_08, -1);
        }
        sp6C.unk_00 = sp6C.unk_00->unk_04;
    }
    func_002F1790(arg0 + 0x10, arg1 + 0x30)->unk_04 = (s32)arg1;
    sp70.unk_00 = func_002F1270(arg1 + 0x10);
    while (temp_n = func_002F1260(arg1 + 0x10), sp70.unk_00 != temp_n) {
        temp_s2 = *(u8 **)sp70.unk_00->unk_10;
        func_002F1790(arg0 + 0x20, temp_s2 + 0x30)->unk_04 = (s32)temp_s2;
        func_002CFEF0(&sp70);
    }
    func_002CF5C0(&sp50, 0);
}
