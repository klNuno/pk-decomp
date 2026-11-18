#include "common.h"

void func_00285C20();
void func_00285C30();
void func_00285C50();
void func_00285C80();
void func_00285CA0();
void func_00285E60();
void func_00285E80();
extern f32 D_0035F4E8;
extern f32 D_0035F630;
extern s32 D_007B2414[];
extern s16 D_007B2438[];
extern s32 D_007B243C[];
extern volatile s32 D_007B2440[];
extern s32 D_007B2444[];
extern s32 D_007B244C[];
extern s32 *D_007B8F54[];

static inline void func_0018F0F0_inline(void) {
    if (D_007B2440[0] & 0x600) {
        *D_007B8F54[0] &= ~0x200;
        *D_007B8F54[0] &= ~0x100;
    }
    D_007B2440[0] = 0;
}

void func_0018F0F0(void) {
    func_00285C80(0xB44);
    func_00285C50(0xBE2);
    func_00285E60(0x302, 0x303);
    func_00285CA0(1);
    func_00285C50(0xB71);
    func_00285C80(0xBE2);
    func_00285C80(0xBC0);
    func_00285C80(0xB50);
    func_00285E80(4);
    func_00285C30();
    func_00285C20();
    D_007B2438[0] = 0;
    D_007B2444[0] = 0;
    D_007B244C[0] &= 0xFF000000;
    func_0018F0F0_inline();
    D_007B243C[0] = 0;
    D_0035F630 = D_0035F4E8;
    func_0018F0F0_inline();
    D_007B2414[0] = 3;
    D_007B2444[0] = 0;
}
