#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} unk_func_002E0820_0;

void func_002DF290(unk_func_002E0820_0 *, s32);
u8 func_002DEF70(unk_func_002E0820_0 *);
s32 rand(void);
void func_002DEB50(unk_func_002E0820_0 *, s32);
s32 func_001273A8(f32);

void func_002E0820(s32 arg0, u32 *arg1) {
    unk_func_002E0820_0 t;
    u8 temp;
    u32 temp2;
    s32 v;

    func_002DF290(&t, arg0);
    temp = func_002DEF70(&t);
    temp2 = *arg1;
    v = func_001273A8(temp2 * (rand() / 2147483648.0f));
    if (temp) {
        func_002DEB50(&t, v);
    }
}
