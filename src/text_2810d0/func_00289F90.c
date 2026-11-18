#include "common.h"

typedef struct unk_func_00289F90_0 {
    u16 unk_00_0 : 9;
    u16 unk_00_9 : 7;
    u8 pad_02[0xE];
} unk_func_00289F90_0;

void func_0028A1B0(void);
void func_00297C20(void);
void func_002C5540(s32, s32);
extern s32 D_00360418;
extern u8 D_0036041C;
extern unk_func_00289F90_0 D_007B0460;
extern unk_func_00289F90_0 D_007B04E0;
extern unk_func_00289F90_0 D_007B05D0;
extern unk_func_00289F90_0 D_007B0650;
extern u8 D_007B0774[];
extern u8 D_007B0775[];
extern unk_func_00289F90_0 D_007B0970;
extern unk_func_00289F90_0 D_007B0978;
extern u32 D_007B2370[];

void func_00289F90(void) {
    if (D_007B0774[0] != 0) {
        func_00297C20();
        if (D_007B2370[0] & 0x20000) {
            D_0036041C = 1;
            if (D_007B0775[0] != 0) {
                if (D_00360418 & 1) {
                    D_007B0970.unk_00_0 = D_007B0460.unk_00_0;
                    D_007B0978.unk_00_0 = D_007B04E0.unk_00_0;
                } else {
                    D_007B0970.unk_00_0 = D_007B05D0.unk_00_0;
                    D_007B0978.unk_00_0 = D_007B0650.unk_00_0;
                }
            } else {
                if (!(D_00360418 & 1)) {
                    D_007B0970.unk_00_0 = D_007B0460.unk_00_0;
                    D_007B0978.unk_00_0 = D_007B04E0.unk_00_0;
                } else {
                    D_007B0970.unk_00_0 = D_007B05D0.unk_00_0;
                    D_007B0978.unk_00_0 = D_007B0650.unk_00_0;
                }
            }
            func_002C5540(0x420, D_00360418);
        } else {
            func_0028A1B0();
        }
    }
}
