#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    u8 pad_40[0xC];
    s32 unk_4C;
} unk_Q_0;

void func_00119548();
void func_00285CC0();
void func_002CCB60();
void func_00304B00();
void func_0031A130();
void func_0031A170();
void func_0031A330();
void func_0031A360();
extern s32 D_0035FEA4;
extern unk_Q_0 *D_0035FEA8;
extern s32 D_0035FEAC;

void func_00192700(void) {
    unk_Q_0 *p;

    D_0035FEA4 = 0;
    if (D_0035FEA8 != NULL) {
        func_0031A360(D_0035FEA8->unk_4C);
        func_0031A170(D_0035FEAC);
        func_0031A130(D_0035FEAC);
        func_002CCB60();
        func_002CCB60();
        p = D_0035FEA8;
        if (p != NULL) {
            p->unk_00 = 0;
            if (p->unk_0C != 0) {
                func_00119548(p->unk_0C);
                p->unk_08 = 0;
                p->unk_04 = 0;
                p->unk_14 = 0;
                p->unk_10 = 0;
                p->unk_0C = 0;
            }
            func_0031A330(p->unk_4C);
            if (p->unk_1C != 0) {
                func_00285CC0(1, &p->unk_1C);
                p->unk_1C = 0;
            }
            if (p->unk_18 != 0) {
                func_00119548(p->unk_18);
                p->unk_18 = 0;
            }
            if (p->unk_24 != 0) {
                func_00285CC0(1, &p->unk_24);
                p->unk_24 = 0;
            }
            if (p->unk_20 != 0) {
                func_00119548(p->unk_20);
                p->unk_20 = 0;
            }
            if (p->unk_3C != 0) {
                func_00285CC0(1, &p->unk_3C);
                p->unk_3C = 0;
            }
            if (p->unk_38 != 0) {
                func_00119548(p->unk_38);
                p->unk_38 = 0;
            }
            if (p->unk_2C != 0) {
                func_00285CC0(1, &p->unk_2C);
                p->unk_2C = 0;
            }
            if (p->unk_28 != 0) {
                func_00119548(p->unk_28);
                p->unk_28 = 0;
            }
            if (p->unk_34 != 0) {
                func_00285CC0(1, &p->unk_34);
                p->unk_34 = 0;
            }
            if (p->unk_30 != 0) {
                func_00119548(p->unk_30);
                p->unk_30 = 0;
            }
            func_00304B00(p);
        }
        D_0035FEA8 = NULL;
    }
}
