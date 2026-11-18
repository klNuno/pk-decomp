#include "common.h"

typedef struct unk_func_002E3900_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3900_0;

extern "C" {
void c4sdk_malloc(s32 **, s32);
s32 func_002CEA20(s32 *);
s32 func_002CEAF0(s32 **, s32, s32, s32, s32);
void func_002D0DA0(s32 **, void *);
void func_002DC050(unk_func_002E3900_0 *, s32 **);
void func_002DD2F0(void *, bool);
bool func_002DD340(void *);
void func_002DD690(void *, unk_func_002E3900_0 *);

void func_002E3900(unk_func_002E3900_0 *arg0) {
    u8 sp30[0x10];
    s32 *sp40;
    s32 *sp44;
    u8 sp48[4];
    u8 sp4C[4];
    u8 temp;
    bool var;
    s32 temp2;

    func_002DD690(sp30, arg0);
    func_002D0DA0(&sp40, sp48);
    func_002D0DA0(&sp44, sp4C);
    arg0->unk_10 += 4;
    temp = func_002DD340(sp30);
    func_002DC050(arg0, &sp40);
    func_002DC050(arg0, &sp44);
    if (temp) {
        var = false;
        if (*sp40 == (temp2 = *sp44)) {
            if (func_002CEAF0(&sp40, 0, *sp40, func_002CEA20(sp44), temp2) == 0) {
                var = true;
            }
        }
        func_002DD2F0(sp30, var);
    }
    c4sdk_malloc(&sp44, 0);
    c4sdk_malloc(&sp40, 0);
}
}
