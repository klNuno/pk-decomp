#include "common.h"

extern s32 D_007B8000[];
extern s32 D_007B8004[];
extern s32 *D_007B8F54[];

void func_0028F190(s32 arg0, s32 arg1) {
    D_007B8000[0] = arg0;
    D_007B8004[0] = arg1;
    switch (arg1) {
    case 0x1600:
        *D_007B8F54[0] = (*D_007B8F54[0] & 1) | 2;
        *D_007B8F54[0] |= 0x20;
        break;
    case 0x1200:
        *D_007B8F54[0] = (*D_007B8F54[0] & 1) | 4;
        *D_007B8F54[0] |= 0x20;
        break;
    case 0x1201:
        *D_007B8F54[0] = (*D_007B8F54[0] & 1) | 8;
        break;
    case 0x1602:
        *D_007B8F54[0] = (*D_007B8F54[0] & 1) | 0xC;
        *D_007B8F54[0] |= 0x20;
        break;
    case 0x1202:
        *D_007B8F54[0] = (*D_007B8F54[0] & 1) | 0x10;
        break;
    }
}
