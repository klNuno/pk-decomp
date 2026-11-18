#include "common.h"

void func_00172480();
void func_00189390();
void func_00285800();
void func_00285940();
void func_00285A50();
void func_00285C60();
void func_00285CF0();
extern s32 D_0035FC28;
extern s32 D_0035FC2C;
extern s32 D_0035FC30;
extern u8 D_0036EFE0[][0x17700];
extern u8 D_0039DDE0[][0x17700];
extern u8 D_003CCBE0[][0x17700];
extern s32 D_007B2414[];

void func_00172310(s32 arg0) {
    s32 count = D_0035FC2C;
    s32 idx = D_0035FC28;
    void *p;
    s32 n;

    if (count != 0) {
        func_00189390();
        func_00172480(D_0035FC30, arg0);
        D_007B2414[0] = 2;
        p = D_003CCBE0[idx];
        func_00285A50(0x1406, -2, p);
        n = count * 6;
        func_00285940(n, 0x1406, -2, D_0039DDE0[idx]);
        func_00285CF0(n, 0x1406, -2, p);
        func_00285800(n, 0x1406, -2, D_0036EFE0[idx]);
        func_00285C60(4, 0, n);
        D_0035FC28 = 0;
        D_007B2414[0] = 3;
        D_0035FC2C = 0;
    }
}
