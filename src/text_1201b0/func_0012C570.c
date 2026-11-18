#include "common.h"

extern s32 D_0035F820;
extern s32 D_0035F858;
extern s32 D_0035F860;
extern s32 D_00364BCC[];
extern s32 D_00364BD0[];
void func_00155C70(s32);

void func_0012C570(void) {
    s32 temp;

    D_0035F858 = 0;
    func_00155C70(D_00364BD0[0]);
    D_0035F858++;
    temp = D_00364BCC[D_0035F858];
    D_0035F860 = temp;
    D_0035F820 = temp;
}
