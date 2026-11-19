/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001329E0_0 {
    u8 pad_00[0x4];
    void *unk_04;
    union {
        u8 unk_08_u8;
        u16 unk_08_u16;
        s32 unk_08_s32;
        s64 unk_08_s64;
        struct {
            const void *unk_08;
            u32 unk_0C;
        } unk_08_p;
        struct {
            u8 pad_08;
            s8 unk_09;
        } unk_08_b;
    } unk_08;
    u16 unk_10;
} unk_func_001329E0_0;

extern "C" {
void *memcpy(void *, const void *, u32);

bool func_001329E0(unk_func_001329E0_0 *arg0) {
    bool ret = true;

    switch (arg0->unk_10 & 0xFC00) {
    case 0x8000: {
        *(s8 *)arg0->unk_04 &= ~arg0->unk_08.unk_08_b.unk_09;
        s32 m = arg0->unk_08.unk_08_b.unk_09;
        s8 *ptr = (s8 *)arg0->unk_04;
        *ptr |= m;
        break;
    }
    case 0x1000:
        *(u8 *)arg0->unk_04 = arg0->unk_08.unk_08_u8;
        break;
    case 0x2000:
        *(u16 *)arg0->unk_04 = arg0->unk_08.unk_08_u16;
        break;
    case 0x3000:
        *(s32 *)arg0->unk_04 = arg0->unk_08.unk_08_s32;
        break;
    case 0x4000:
        *(s64 *)arg0->unk_04 = arg0->unk_08.unk_08_s64;
        break;
    case 0x7000:
        *(s32 *)arg0->unk_04 = arg0->unk_08.unk_08_s32;
        break;
    case 0x5000:
        memcpy(arg0->unk_04, arg0->unk_08.unk_08_p.unk_08, arg0->unk_08.unk_08_p.unk_0C);
        break;
    default:
        ret = false;
        break;
    }
    return ret;
}
}
