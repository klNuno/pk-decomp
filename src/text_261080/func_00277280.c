#include "common.h"

typedef struct unk_func_00277280_0 {
    char *unk_00;
    s32 unk_04;
} unk_func_00277280_0;

s32 StrICmp(char *, char *);
extern u32 D_007A8160[];
extern unk_func_00277280_0 *D_007A816C[];
extern u8 D_007A8174[];
extern u8 D_007A8175[];
extern u8 D_007A8176[];
extern u8 D_007A8177[];

void func_00277280(char *arg0, u8 arg1, u8 arg2) {
    u32 i;

    D_007A8175[0] = arg1;
    D_007A8176[0] = arg2;
    D_007A8177[0] = 0;
    for (i = 0; i < D_007A8160[0]; i++) {
        if (StrICmp(D_007A816C[0][i].unk_00, arg0) == 0) {
            D_007A8174[0] = i;
        }
    }
}
