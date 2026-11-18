#include "common.h"

void func_002D8A40(s32, s32);
s32 malloc(s32);
extern s32 D_0036037C;
extern s32 D_00360380;
extern s32 D_007AB300[];
extern s32 D_007AB304[];
extern s32 D_007AB308[];
extern s32 D_007AB30C[];
extern s32 D_007AB310[];
extern s32 D_007AB314[];
extern s32 D_007AB318[];
extern s32 D_007AB31C[];
extern s32 D_007AB320[];
extern s32 D_007AB324[];

s32 func_0027B190(s32 arg0) {
    func_002D8A40(2, 0x5622);
    D_007AB324[0] = arg0;
    D_00360380 = 0;
    D_007AB304[0] = 0x400;
    D_0036037C = 0;
    D_007AB31C[0] = 0;
    D_007AB318[0] = 0;
    D_007AB300[0] = 0;
    D_007AB308[0] = 0;
    D_007AB30C[0] = 0;
    D_007AB310[0] = malloc(0x8010);
    D_007AB314[0] = (D_007AB310[0] + 0xF) / 16 * 16;
    D_007AB320[0] = 0x8000;
    return 0;
}
