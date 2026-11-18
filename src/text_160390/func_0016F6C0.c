/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
} unk_0016F6C0_0;

void *malloc(u32);
extern s32 D_0035FBDC;
extern unk_0016F6C0_0 *D_0035FBE0;
extern unk_0016F6C0_0 *D_0035FBF0;
extern u32 *D_0035FC00;
extern unk_0016F6C0_0 *D_0036EEE0[];
extern unk_0016F6C0_0 *D_0036EEE4[];
extern unk_0016F6C0_0 *D_0036EEE8[];
extern unk_0016F6C0_0 *D_0036EEEC[];

void func_0016F6C0(void) {
    u32 temp;
    u32 *temp2;
    if (D_0035FC00 == NULL) {
        D_0036EEE0[0] = malloc(0x5DC0);
        D_0036EEE4[0] = malloc(0x5DC0);
        D_0036EEE8[0] = malloc(0x5DC0);
        D_0036EEEC[0] = malloc(0x5DC0);
        D_0035FC00 = malloc(0x1770);
        D_0035FBDC = 0;
        D_0035FBE0 = D_0036EEE0[0];
        D_0035FBF0 = D_0036EEE4[0];
        for (temp = 0; temp < 1500; temp++) {
            D_0036EEE0[0][temp].unk_0C = 1.0f;
            D_0036EEE4[0][temp].unk_0C = 1.0f;
            D_0036EEE8[0][temp].unk_0C = 1.0f;
            D_0036EEEC[0][temp].unk_0C = 1.0f;
        }
        temp2 = D_0035FC00;
        for (temp = 0; temp < 1500; temp++) {
            *temp2++ = 0x80808080;
        }
    }
}
