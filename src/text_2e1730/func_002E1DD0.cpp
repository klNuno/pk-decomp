/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002E1DD0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E1DD0_0;

extern "C" {

void func_002D0DA0(void *, void *);
void func_002DD690(void *, unk_func_002E1DD0_0 *);
u8 func_002DD340(void *);
void func_002DC050(unk_func_002E1DD0_0 *, s32 **);
s32 func_002CEA20(s32 *);
s32 func_002CEAF0(s32 **, s32, s32, s32, s32);
void func_002DD2F0(void *, bool);
void c4sdk_malloc(void *, s32);

}

inline bool func_002E1DD0_eq(s32 **a, s32 **b) {
    bool temp = false;

    if (**a == **b) {
        if (func_002CEAF0(a, 0, **a, func_002CEA20(*b), **b) == 0) {
            temp = true;
        }
    }
    return temp;
}

extern "C" void func_002E1DD0(unk_func_002E1DD0_0 *arg0) {
    s32 temp0[4];
    s32 *temp1;
    s32 *temp2;
    s32 temp3;
    s32 temp4;
    u8 temp5;

    func_002D0DA0(&temp1, &temp3);
    func_002D0DA0(&temp2, &temp4);
    func_002DD690(temp0, arg0);
    arg0->unk_10 += 4;
    temp5 = func_002DD340(temp0);
    func_002DC050(arg0, &temp1);
    func_002DC050(arg0, &temp2);
    if (temp5) {
        func_002DD2F0(temp0, !func_002E1DD0_eq(&temp1, &temp2));
    }
    c4sdk_malloc(&temp2, 0);
    c4sdk_malloc(&temp1, 0);
}
