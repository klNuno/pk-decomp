#include "common.h"

extern u8 D_003FC000[];

void func_00182C10(void) {
    u32 i;
    u32 hi;
    u32 lo;

    for (i = 0; i <= 0xFF; i++) {
        hi = 0xF;
        lo = 0xF;
        if (i >= 0x41 && i < 0x4C) {
            lo = 0;
            hi = i - 0x41;
        } else if (i >= 0x4C && i < 0x57) {
            lo = 1;
            hi = i - 0x4C;
        } else if (i >= 0x57 && i < 0x5B) {
            lo = 2;
            hi = i - 0x57;
        } else if (i >= 0x30 && i < 0x37) {
            lo = 2;
            hi = i - 0x2C;
        } else if (i >= 0x37 && i < 0x3A) {
            lo = 3;
            hi = i - 0x37;
        } else if (i >= 0x61 && i < 0x65) {
            lo = 3;
            hi = i - 0x5A;
        } else if (i >= 0x65 && i < 0x70) {
            lo = 4;
            hi = i - 0x65;
        } else if (i >= 0x70 && i < 0x7B) {
            lo = 5;
            hi = i - 0x70;
        } else {
            switch (i) {
            case 0x2E:
                lo = 3;
                hi = 3;
                break;
            case 0x21:
                lo = 3;
                hi = 4;
                break;
            case 0x22:
                lo = 3;
                hi = 5;
                break;
            case 0x3A:
                lo = 3;
                hi = 6;
                break;
            case 0x3D:
                lo = 4;
                hi = 0xB;
                break;
            case 0x2D:
                lo = 5;
                hi = 0xB;
                break;
            case 0x3E:
                lo = 3;
                hi = 0xB;
                break;
            case 0x5E:
                lo = 2;
                hi = 0xB;
                break;
            }
        }
        hi = (hi << 4) + lo;
        D_003FC000[i] = hi;
    }
}
