#include "common.h"

typedef struct unk_func_001765D0_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
    s32 unk_20;
    u8 pad_24[8];
    s32 unk_2C;
} unk_func_001765D0_0;

void func_0016F660();
void func_00176750(s32);
void func_00176B70(s32, s32);
void func_0018AD00();
void func_0018AD20();
void func_0018B080();
void func_0018E2C0();
void func_0019A710();
void func_001C51C0();
void func_001C5410(s32);
extern s32 D_0035FC5C;
extern s32 D_0035FC60;
extern s32 D_0035FC64;
extern s32 D_0035FE28;
extern s32 D_0035FF68;
extern s32 D_0035FF70;
extern s32 D_0035FF74;
extern s16 D_00364E80[];
extern s32 D_00364EA0[];

void func_001765D0(void) {
    u32 i;
    unk_func_001765D0_0 *p;
    s32 temp;

    D_0035FC5C = 1;
    func_0018AD20();
    func_001C51C0();
    func_00176750(D_0035FF74);
    func_00176750(D_0035FF70);
    func_00176750(D_0035FF68);
    if (D_0035FC60 != 0) {
        func_001C5410(D_0035FC60);
        D_0035FC60 = 0;
    }
    if (D_0035FC64 != 0) {
        func_001C5410(D_0035FC64);
        D_0035FC64 = 0;
    }
    func_0019A710();
    for (i = 0; i < 10; i++) {
        p = (unk_func_001765D0_0 *)D_00364E80[i];
        if (p != NULL) {
            p->unk_2C = 0;
            p->unk_20 = 0;
            p->unk_1C = 0;
        }
        temp = D_00364EA0[i];
        D_0035FE28 = 0;
        if (temp != 0) {
            func_00176B70(temp, 0);
        }
    }
    func_0016F660();
    func_0018B080();
    func_0018E2C0();
    D_0035FC5C = 0;
    func_0018AD00();
}
