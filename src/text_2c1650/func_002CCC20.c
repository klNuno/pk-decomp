#include "common.h"

typedef struct unk_func_002CCC20_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
} unk_func_002CCC20_0;

typedef struct unk_func_002CCC20_1 {
    u32 unk_00;
    void (*unk_04)(unk_func_002CCC20_0 *);
} unk_func_002CCC20_1;

extern s32 D_003604D4;
extern unk_func_002CCC20_1 D_007BD500[];

s32 func_002CCC20(s32 arg0, s32 arg1, u32 arg2) {
    unk_func_002CCC20_0 ev;
    s32 i;
    s32 ret = 0;
    unk_func_002CCC20_1 *p;

    for (i = 0; i < D_003604D4; i++) {
        p = &D_007BD500[i];
        if ((arg2 & 1) == p->unk_00) {
            ev.unk_04 = arg0;
            ev.unk_00 = 0x10;
            ev.unk_08 = arg1;
            ev.unk_10 = 1;
            p->unk_04(&ev);
            ret |= 1;
        }
        if ((arg2 & 2) == p->unk_00) {
            ev.unk_04 = arg0;
            ev.unk_00 = 0x10;
            ev.unk_08 = arg1;
            ev.unk_10 = 2;
            p->unk_04(&ev);
            ret |= 1;
        }
        if ((arg2 & 4) == p->unk_00) {
            ev.unk_04 = arg0;
            ev.unk_00 = 0x10;
            ev.unk_08 = arg1;
            ev.unk_10 = 4;
            p->unk_04(&ev);
            ret |= 1;
        }
    }
    return ret;
}
