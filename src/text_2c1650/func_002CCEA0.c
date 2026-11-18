#include "common.h"

typedef struct unk_func_002CCEA0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_func_002CCEA0_0;

typedef struct unk_func_002CCEA0_1 {
    s32 unk_00;
    void (*unk_04)(unk_func_002CCEA0_0 *);
} unk_func_002CCEA0_1;

extern s32 D_003604DC;
extern unk_func_002CCEA0_1 D_007BD3C0[];

s32 func_002CCEA0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002CCEA0_0 ev;
    s32 i;
    s32 ret;
    unk_func_002CCEA0_1 *e;

    ret = 0;
    for (i = 0; i < D_003604DC; i++) {
        e = &D_007BD3C0[i];
        if ((arg2 & 1) == e->unk_00) {
            ev.unk_04 = arg0;
            ev.unk_00 = 0x40;
            ev.unk_08 = arg1;
            ev.unk_10 = 1;
            e->unk_04(&ev);
            ret |= 1;
        }
        if ((arg2 & 2) == e->unk_00) {
            ev.unk_04 = arg0;
            ev.unk_00 = 0x40;
            ev.unk_08 = arg1;
            ev.unk_10 = 2;
            e->unk_04(&ev);
            ret |= 1;
        }
        if ((arg2 & 4) == e->unk_00) {
            ev.unk_04 = arg0;
            ev.unk_00 = 0x40;
            ev.unk_08 = arg1;
            ev.unk_10 = 4;
            e->unk_04(&ev);
            ret |= 1;
        }
    }
    return ret;
}
