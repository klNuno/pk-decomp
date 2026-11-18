#include "common.h"

void func_00189390(void);
void func_00285AC0(s32);
void func_00285B00(void);
extern s32 D_0035FE00;
extern s32 D_0035FE04;
extern s32 D_007B243C[];
extern s32 D_007B2440[];
extern s32 D_007B2444[];
extern s32 *D_007B8F54[];

void func_0018F050(s32 arg0) {
    if (arg0 == 1) {
        D_0035FE00 = 1;
        D_0035FE04 = 0;
        return;
    }
    D_0035FE04 = 0;
    D_007B2444[0] = 0;
    D_007B243C[0] = 0;
    D_0035FE00 = 0;
    if (D_007B2440[0] & 0x600) {
        *D_007B8F54[0] &= ~0x200;
        *D_007B8F54[0] &= ~0x100;
    }
    D_007B2440[0] = 0;
    func_00189390();
    func_00285AC0(0x1700);
    func_00285B00();
}
