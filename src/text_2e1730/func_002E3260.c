#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3260_0;

void func_002D0DA0(s32 **, void *);
void func_002DD690(void *, unk_func_002E3260_0 *);
u8 func_002DD340(void *);
void func_002DC050(unk_func_002E3260_0 *, s32 **);
s32 func_002CEA20(s32 *);
s32 func_002CEAF0(s32 **, s32, s32, s32, s32);
void func_002DD2F0(void *, s32);
void c4sdk_malloc(s32 **, s32);

void func_002E3260(unk_func_002E3260_0 *arg0) {
    u8 sp30[0x10];
    s32 *sp40;
    s32 *sp44;
    s32 sp48;
    s32 sp4C;
    u8 flag;

    func_002D0DA0(&sp40, &sp48);
    func_002D0DA0(&sp44, &sp4C);
    func_002DD690(sp30, arg0);
    arg0->unk_10 += 4;
    flag = func_002DD340(sp30);
    func_002DC050(arg0, &sp40);
    func_002DC050(arg0, &sp44);
    if (flag) {
        s32 temp;

        temp = *sp40;
        func_002DD2F0(sp30, func_002CEAF0(&sp44, 0, *sp44, func_002CEA20(sp40), temp) < 0);
    }
    c4sdk_malloc(&sp44, 0);
    c4sdk_malloc(&sp40, 0);
}
