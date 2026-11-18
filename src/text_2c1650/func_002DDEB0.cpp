/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002DDEB0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    u8 *unk_24;
    u8 pad_28[0x14];
    u8 *unk_3C;
} unk_func_002DDEB0_0;

typedef struct unk_func_002DDEB0_1 {
    u8 unk_00;
    u8 pad_01[3];
    unk_func_002DDEB0_0 *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
} unk_func_002DDEB0_1;

extern "C" {

u8 func_002DDEB0(unk_func_002DDEB0_1 *arg0) {
    unk_func_002DDEB0_0 *r;
    u8 *data;
    s32 pos;
    u8 *q;
    s32 off;
    u8 ret;

    {
        s32 rem = arg0->unk_04->unk_10 & 3;
        if (rem) {
            arg0->unk_04->unk_10 += 4 - rem;
        }
    }
    r = arg0->unk_04;
    data = r->unk_24;
    pos = r->unk_10;
    switch (*(s32 *)(data + pos)) {
    case 13:
        arg0->unk_0C = r->unk_18 + (r->unk_0C - *(s32 *)(data + (pos + 4)));
        arg0->unk_04->unk_10 += 8;
        arg0->unk_00 = 0;
        ret = 1;
        break;
    case 7:
        arg0->unk_0C = r->unk_20 + *(s32 *)(data + (pos + 4));
        arg0->unk_00 = 0;
        arg0->unk_04->unk_10 += 8;
        ret = 1;
        break;
    case 15:
        q = r->unk_3C;
        off = *(s32 *)(data + (pos + 4));
        switch (q[off]) {
        case 1:
            arg0->unk_0C = *(s32 *)(q + (off + 4));
            arg0->unk_00 = 0;
            arg0->unk_04->unk_10 += 8;
            ret = arg0->unk_0C != 0;
            break;
        case 2:
        default:
            arg0->unk_00 = 0;
            arg0->unk_0C = 0;
            arg0->unk_04->unk_10 += 8;
            ret = 0;
            break;
        }
        break;
    default:
        arg0->unk_0C = 0;
        arg0->unk_00 = 0;
        arg0->unk_04->unk_10 += 8;
        ret = 0;
        break;
    }
    return ret;
}

}
