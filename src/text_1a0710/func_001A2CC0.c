/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001A2CC0_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001A2CC0_0;

unk_func_001A2CC0_0 *HIE_fn_hGetSuperObjectObject(s32);
void func_0012D6F0(s32, s32, s32);
s32 func_0012DCA0(s32);
s32 func_001971C0(s32);
s32 func_001971E0(s32);
s32 func_00197CC0(s32);
void func_001A2B20(s32);
s32 func_001A7D60(s32);
s32 func_001A7D80(void);
extern s32 D_0035FF68;
extern s32 D_0035FF70;

void func_001A2CC0(void) {
    s32 child;
    s32 next;
    s32 tmp;
    s32 i;
    s32 parent;
    s32 first;

    parent = func_001A7D60(func_001A7D80());
    i = 0;
    child = func_001971E0(parent);
    first = next = func_0012DCA0(child);
    while (child != 0) {
        if (func_001971C0(child) == 2) {
            func_0012D6F0(child, D_0035FF70, func_00197CC0(HIE_fn_hGetSuperObjectObject(child)->unk_04));
        }
        i++;
        child = next;
        tmp = next = func_0012DCA0(child);
        (void)tmp;
    }
    func_001A2B20(D_0035FF70);
    func_001A2B20(D_0035FF68);
}
