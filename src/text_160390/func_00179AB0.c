#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} unk_func_00179AB0_0;

void func_00179CC0();
void func_00285800();
void func_00285940();
void func_00285A50();
void func_00285CF0();
void func_00287570();
extern s32 D_0035FC8C;
extern s32 D_0035FCB4;
extern s32 D_0035FCB8;
extern s32 D_0035FCBC;
extern s32 D_0035FCC0;
extern unk_func_00179AB0_0 D_0036EFE0[][0x1770];
extern unk_func_00179AB0_0 D_0039DDE0[][0x1770];
extern unk_func_00179AB0_0 D_003CCBE0[][0x1770];
extern s32 D_007B2414[];
extern s32 D_007B243C[];
extern s32 D_007B2440[];
extern s32 D_007B8284[];
extern s32 *D_007B8F54[];

void func_00179AB0(s32 arg0) {
    if (D_0035FCB4 != 0 && D_0035FCC0 != 0) {
        func_00179CC0(D_0035FCB8, arg0);
        D_007B2414[0] = 3;
        if (D_007B2440[0] & 0x600) {
            *D_007B8F54[0] &= ~0x200;
            *D_007B8F54[0] &= ~0x100;
        }
        D_007B2440[0] = 0;
        func_00285A50(0x1406, -2, &D_003CCBE0[D_0035FC8C][D_0035FCBC]);
        func_00285940(D_0035FCC0 * 6, 0x1406, -2, &D_0039DDE0[D_0035FC8C][D_0035FCBC]);
        func_00285CF0(D_0035FCC0 * 6, 0x1406, -2, &D_003CCBE0[D_0035FC8C][D_0035FCBC]);
        func_00285800(D_0035FCC0 * 6, 0x1406, -2, &D_0036EFE0[D_0035FC8C][D_0035FCBC]);
        D_007B243C[0] = 1;
        func_00287570(4, 0, D_0035FCC0 * 6, D_007B8284[0], 1);
        D_007B243C[0] = 0;
        D_0035FCB4 = 0;
        D_007B2414[0] = 3;
        D_0035FCB8 = 0;
        D_0035FCBC = 0;
        D_0035FCC0 = 0;
    }
}
