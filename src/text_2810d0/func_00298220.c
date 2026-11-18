#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u32 unk_14;
} unk_func_00298220_0;

extern u32 D_007B2370[];
extern u32 D_007B24E4[];
extern u32 D_007B24E8[];
extern unk_func_00298220_0 *D_007B25B0[];
extern u32 D_007B7BA4[];
extern u32 D_007B8278[];
extern u32 D_007B82FC[];
extern u32 D_007B836C[];
extern u32 D_007B8480[];

s32 func_00298220(s32 arg0)
{
    switch (arg0) {
    case 0xB50:
        if (D_007B24E4[0] & 0x400) {
            return 1;
        }
        break;
    case 0xDE1:
        if (D_007B24E8[0] & ((D_007B8480[0] == 0) ? 2 : 0x200)) {
            return 1;
        }
        break;
    case 0xBC0:
        if (D_007B2370[0] & 0x400) {
            return 1;
        }
        break;
    case 0xD80:
        if (D_007B7BA4[0] & 0x10000000) {
            return 1;
        }
        break;
    case 0xBE2:
        if (D_007B2370[0] & 0x100) {
            return 1;
        }
        break;
    case 0xB57:
        if (D_007B24E4[0] & 0x200) {
            return 1;
        }
        break;
    case 0xB44:
        if (D_007B2370[0] & 0x2000) {
            return 1;
        }
        break;
    case 0xB71:
        if (D_007B2370[0] & 0x800) {
            return 1;
        }
        break;
    case 0xBD0:
        if (D_007B2370[0] & 0x200) {
            return 1;
        }
        break;
    case 0xB60:
        if (D_007B2370[0] & 0x80) {
            return 1;
        }
        break;
    case 0x4000:
        if (D_007B24E4[0] & 1) {
            return 1;
        }
        break;
    case 0x4001:
        if (D_007B24E4[0] & 2) {
            return 1;
        }
        break;
    case 0x4002:
        if (D_007B24E4[0] & 4) {
            return 1;
        }
        break;
    case 0x4003:
        if (D_007B24E4[0] & 8) {
            return 1;
        }
        break;
    case 0x4004:
        if (D_007B24E4[0] & 0x10) {
            return 1;
        }
        break;
    case 0x4005:
        if (D_007B24E4[0] & 0x20) {
            return 1;
        }
        break;
    case 0x4006:
        if (D_007B24E4[0] & 0x40) {
            return 1;
        }
        break;
    case 0x4007:
        if (D_007B24E4[0] & 0x80) {
            return 1;
        }
        break;
    case 0xB20:
        if (D_007B2370[0] & 2) {
            return 1;
        }
        break;
    case 0xB24:
        if (D_007B2370[0] & 4) {
            return 1;
        }
        break;
    case 0xBF1:
        if (D_007B2370[0] & 0x1000) {
            return 1;
        }
        break;
    case 0xD90:
        if (D_007B7BA4[0] & 0x400) {
            return 1;
        }
        break;
    case 0xD91:
        if (D_007B7BA4[0] & 0x800) {
            return 1;
        }
        break;
    case 0xD92:
        if (D_007B7BA4[0] & 0x1000) {
            return 1;
        }
        break;
    case 0xD93:
        if (D_007B7BA4[0] & 0x10) {
            return 1;
        }
        break;
    case 0xD94:
        if (D_007B7BA4[0] & 0x20) {
            return 1;
        }
        break;
    case 0xD95:
        if (D_007B7BA4[0] & 0x40) {
            return 1;
        }
        break;
    case 0xD96:
        if (D_007B7BA4[0] & 0x80) {
            return 1;
        }
        break;
    case 0xD97:
        if (D_007B7BA4[0] & 0x100) {
            return 1;
        }
        break;
    case 0xD98:
        if (D_007B7BA4[0] & 0x200) {
            return 1;
        }
        break;
    case 0xDB0:
        if (D_007B7BA4[0] & 0x400000) {
            return 1;
        }
        break;
    case 0xDB1:
        if (D_007B7BA4[0] & 0x800000) {
            return 1;
        }
        break;
    case 0xDB2:
        if (D_007B7BA4[0] & 0x01000000) {
            return 1;
        }
        break;
    case 0xDB3:
        if (D_007B7BA4[0] & 0x10000) {
            return 1;
        }
        break;
    case 0xDB4:
        if (D_007B7BA4[0] & 0x20000) {
            return 1;
        }
        break;
    case 0xDB5:
        if (D_007B7BA4[0] & 0x40000) {
            return 1;
        }
        break;
    case 0xDB6:
        if (D_007B7BA4[0] & 0x80000) {
            return 1;
        }
        break;
    case 0xDB7:
        if (D_007B7BA4[0] & 0x100000) {
            return 1;
        }
        break;
    case 0xDB8:
        if (D_007B7BA4[0] & 0x200000) {
            return 1;
        }
        break;
    case 0xBA1:
        if (D_007B24E4[0] & 0x100) {
            return 1;
        }
        break;
    case 0xB10:
        if (D_007B2370[0] & 1) {
            return 1;
        }
        break;
    case 0xB41:
        if (D_007B2370[0] & 8) {
            return 1;
        }
        break;
    case 0xB42:
        if (D_007B2370[0] & 0x10) {
            return 1;
        }
        break;
    case 0xC11:
        if (D_007B2370[0] & 0x20) {
            return 1;
        }
        break;
    case 0xB90:
        if (D_007B2370[0] & 0x40) {
            return 1;
        }
        break;
    case 0xDE0:
        if (D_007B24E8[0] & ((D_007B8480[0] == 0) ? 1 : 0x100)) {
            return 1;
        }
        break;
    case 0x8513:
        if (D_007B24E8[0] & 8) {
            return 1;
        }
        break;
    case 0x81FB:
        if (D_007B24E8[0] & 0x10) {
            return 1;
        }
        break;
    case 0xC63:
        if (D_007B25B0[0]->unk_14 & 8) {
            return 1;
        }
        break;
    case 0xC62:
        if (D_007B25B0[0]->unk_14 & 8) {
            return 1;
        }
        break;
    case 0xC60:
        if (D_007B25B0[0]->unk_14 & 8) {
            return 1;
        }
        break;
    case 0xC61:
        if (D_007B25B0[0]->unk_14 & 8) {
            return 1;
        }
        break;
    case 0x8076:
        if (D_007B8278[0] & ((D_007B82FC[0] == 0) ? 1 : 0x80)) {
            return 1;
        }
        break;
    case 0x8079:
        if (D_007B8278[0] & 2) {
            return 1;
        }
        break;
    case 0x8077:
        if (D_007B8278[0] & 4) {
            return 1;
        }
        break;
    case 0x8075:
        if (D_007B8278[0] & 8) {
            return 1;
        }
        break;
    case 0x8078:
        if (D_007B8278[0] & ((D_007B82FC[0] == 0) ? 0x10 : 0x40)) {
            return 1;
        }
        break;
    case 0x8074:
        if (D_007B8278[0] & 0x20) {
            return 1;
        }
        break;
    case 0xF01:
        if (D_007B2370[0] & 0x4000) {
            return 1;
        }
        break;
    case 0xF02:
        if (D_007B2370[0] & 0x8000) {
            return 1;
        }
        break;
    case 0xF03:
        if (D_007B2370[0] & 0x10000) {
            return 1;
        }
        break;
    case 0xF04:
        if (D_007B2370[0] & 0x20000) {
            return 1;
        }
        break;
    case 0x3000:
        if (D_007B836C[0] & 1) {
            return 1;
        }
        break;
    case 0x3001:
        if (D_007B836C[0] & 2) {
            return 1;
        }
        break;
    case 0x3002:
        if (D_007B836C[0] & 4) {
            return 1;
        }
        break;
    case 0x3003:
        if (D_007B836C[0] & 8) {
            return 1;
        }
        break;
    case 0x3004:
        if (D_007B836C[0] & 0x10) {
            return 1;
        }
        break;
    case 0x3005:
        if (D_007B836C[0] & 0x20) {
            return 1;
        }
        break;
    }
    return 0;
}
