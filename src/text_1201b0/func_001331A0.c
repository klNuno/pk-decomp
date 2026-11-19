/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
    u16 unk_10;
} unk_func_001331A0_0;

s32 func_00133030(s32);
unk_func_001331A0_0 *func_00132FE0(void *, s32, u16);
extern u8 D_00364F40[];

void *func_001331A0(s32 arg0, s32 arg1) {
    unk_func_001331A0_0 *p;
    void *ret;

    ret = NULL;
    p = func_00132FE0(D_00364F40, arg0, func_00133030(arg1));
    if (p != NULL) {
        switch (p->unk_10 & 0xFC00) {
        case 0x8000:
        case 0x1000:
            ret = &p->unk_08;
            break;
        case 0x2000:
            ret = &p->unk_08;
            break;
        case 0x3000:
            ret = &p->unk_08;
            break;
        case 0x4000:
            ret = &p->unk_08;
            break;
        case 0x7000:
            ret = &p->unk_08;
            break;
        case 0x5000:
            ret = p->unk_08;
            break;
        default:
            ret = NULL;
            break;
        }
    }
    return ret;
}
