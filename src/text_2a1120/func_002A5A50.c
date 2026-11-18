#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002A5A50_0;

typedef struct {
    s32 unk_00[4];
} __attribute__((aligned(16))) unk_func_002A5A50_1;

void func_0029D500();
void func_0029BB40();
void func_0029D7A0();
void func_0029D130();
extern u8 D_007B8488[];
extern unk_func_002A5A50_0 *D_007B8058[];
extern s32 D_007B24E8[];
extern s32 D_007B2444[];
extern s32 D_00360428;
extern u8 D_007B8608[];
extern unk_func_002A5A50_1 *D_007B8F8C[];
extern unk_func_002A5A50_1 D_007B07D0;
extern u8 D_007B8EC0[];

void func_002A5A50(void) {
    s32 temp;

    if (D_007B8488[0] != 0) {
        temp = D_007B8058[0]->unk_14;
        if (temp == 7) {
            func_0029D500();
        }
        func_0029BB40(1);
        if ((D_007B24E8[0] & 8) && (temp == 5 || temp == 6 || temp == 9)) {
            D_007B8058[0]->unk_14 = 4;
        }
    } else {
        func_0029D7A0(1);
    }
    if (D_007B2444[0] & 2) {
        func_0029D130(D_00360428, D_007B8608);
    }
    *D_007B8F8C[0] = D_007B07D0;
    D_007B8EC0[0] = 0;
}
