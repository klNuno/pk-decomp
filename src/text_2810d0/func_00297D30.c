/* profile: opt_300_noprop */
#include "common.h"

typedef struct {
    __int128 unk_00[4];
} unk_00297D30_0;

typedef struct {
    __int128 unk_00;
} unk_00297D30_1;

extern void func_00288CE0(void);
extern void func_0028ADD0(s32, u32);
extern void func_0029ADD0(void *);
extern unk_00297D30_1 D_003416E0[];
extern unk_00297D30_1 D_003416F0[];
extern u32 D_0035F624;
extern f32 D_0035F630;
extern u32 D_0035F640;
extern u32 (*D_0035F648)(u32);
extern void (*D_0035F64C)(void *);
extern u32 D_00360410;
extern u32 D_007B2370[];
extern u32 D_007B2414[];
extern u32 D_007B2418[];
extern u8 D_007B241C[];
extern u32 D_007B2420[];
extern u32 D_007B2424[];
extern u32 D_007B2428[];
extern u32 D_007B242C[];
extern u16 D_007B2430[];
extern u8 D_007B2432[];
extern u16 D_007B2438[];
extern u32 D_007B243C[];
extern u32 D_007B2440[];
extern u32 D_007B2444[];
extern u32 D_007B2448[];
extern u32 D_007B244C[];
extern u8 D_007B2450[];
extern u32 D_007B8328[];
extern unk_00297D30_0 D_007B8560[];
extern unk_00297D30_0 D_007B85A0[];
extern u32 D_007B8EE4[];
extern u32 D_007B8EE8[];
extern u32 D_007B8EEC[];
extern u32 D_007B8EF0[];
extern u32 D_007B8EF4[];
extern u32 *D_007B8F54[];

void func_00297D30(s32 arg0, u32 arg1) {
    switch (arg0) {
    case 0xF30:
        D_00360410 = arg1;
        break;
    case 0xF11:
        D_007B2444[0] = arg1;
        break;
    case 0xF09:
        D_007B243C[0] = arg1;
        break;
    case 0xF10:
        if ((arg1 & 0x600) != (D_007B2440[0] & 0x600)) {
            if (arg1 & 0x200) {
                *D_007B8F54[0] |= 0x200;
            } else {
                *D_007B8F54[0] &= ~0x200;
            }
            if (arg1 & 0x400) {
                *D_007B8F54[0] |= 0x100;
            } else {
                *D_007B8F54[0] &= ~0x100;
            }
        }
        D_007B2440[0] = arg1;
        break;
    case 0x450:
        D_007B2414[0] = arg1;
        break;
    case 0xF08:
        D_007B2438[0] = arg1;
        break;
    case 0x451:
        D_007B2432[0] = arg1;
        break;
    case 0xF42:
        D_0035F630 = *(f32 *)arg1;
        break;
    case 0xF15:
        D_007B2448[0] = arg1;
        break;
    case 0xF16:
        D_007B244C[0] &= 0xFF000000;
        D_007B244C[0] |= (u64)arg1 & 0xFFFFFFUL;
        break;
    case 0xF17:
        D_007B2450[0] = arg1;
        break;
    case 0xF22:
        func_0029ADD0((void *)arg1);
        break;
    case 0x439:
        D_007B8328[0] = arg1 - 0x800;
        break;
    case 0x441: {
        u32 temp;
        if (arg1 == 0) {
            arg1 = 0x20000;
        }
        temp = arg1 >> 1;
        arg1 = temp >> 4;
        if (D_0035F640 != arg1) {
            D_0035F640 = arg1;
            if (D_007B8EE4[0] != 0) {
                D_0035F64C((void *)(D_007B8EE8[0] & 0xCFFFFFFF));
            }
            D_007B8EE8[0] = D_0035F648((D_0035F640 << 5) + 0x40) | 0x30000000;
            D_007B8EE4[0] = (D_007B8EE8[0] + 0x3F) & ~0x3F;
            D_007B8EF4[0] = D_007B8EE4[0];
            D_007B8EEC[0] = D_007B8EE4[0];
            D_007B8EF0[0] = D_007B8EE4[0] + (D_0035F640 << 4);
        }
        break;
    }
    case 0x442:
        if (D_007B2418[0] != arg1) {
            if (D_0035F624 & 1) {
                func_00288CE0();
            }
            if (arg1 == 1) {
                D_0035F624 = 4;
            } else if (arg1 == 0) {
                D_0035F624 = 0;
            } else {
                D_0035F624 = 8;
            }
            D_007B2418[0] = arg1;
        }
        break;
    case 0x443:
        D_007B2420[0] = arg1;
        break;
    case 0x445:
        D_007B2424[0] = arg1;
        break;
    case 0x444:
        D_007B2428[0] = arg1;
        break;
    case 0xF05:
        if (arg1 == 1) {
            D_007B2370[0] |= 0x40000;
        } else {
            D_007B2370[0] &= ~0x40000;
        }
        break;
    case 0x446:
        D_007B242C[0] = arg1;
        break;
    case 0x447:
        D_007B241C[0] = arg1;
        break;
    case 0x449:
        D_007B2430[0] = arg1 >= 0x20 ? 0x20 : 0x10;
        break;
    case 0xF40:
        D_003416E0[0] = *(unk_00297D30_1 *)arg1;
        break;
    case 0xF41:
        D_003416F0[0] = *(unk_00297D30_1 *)arg1;
        break;
    case 0xF12:
        D_007B8560[0] = *(unk_00297D30_0 *)arg1;
        break;
    case 0xF13:
        D_007B85A0[0] = *(unk_00297D30_0 *)arg1;
        break;
    case 0xF43:
    case 0xF44:
    case 0xF45:
    case 0xF46:
        func_0028ADD0(arg0, arg1);
        break;
    }
}
