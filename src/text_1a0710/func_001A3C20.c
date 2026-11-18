/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} unk_func_001A3C20_0;

unk_func_001A3C20_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0012DCA0(s32);
void func_0012DDD0(s32);
s32 func_00131BD0(s32);
s32 func_001971C0(s32);
s32 func_001971E0(s32);
void func_00197900(s32, s32);
void func_001979E0(s32, s32);
void func_00197B50(s32, s32);
s32 func_00197CC0(s32);
s32 func_001AEF20(s32);
s32 func_001BE470(s32);
extern s32 D_0035FF68;
extern s32 D_0035FF70;

void func_001A3C20(void) {
    s32 cur;
    s32 next;
    s32 temp;
    s32 b;
    s32 i;
    s32 a;

    i = 0;
    cur = func_001971E0(D_0035FF70);
    a = next = func_0012DCA0(cur);
    while (cur != 0) {
        if (func_001971C0(cur) == 2 && func_001AEF20(cur) == 0) {
            temp = func_001BE470(HIE_fn_hGetSuperObjectObject(cur)->unk_20);
            if (func_00131BD0(temp) != 0) {
                func_0012DDD0(cur);
                if ((u8)func_00197CC0(HIE_fn_hGetSuperObjectObject(cur)->unk_04)) {
                    func_00197B50(D_0035FF68, cur);
                } else {
                    func_001979E0(D_0035FF68, cur);
                }
                func_00197900(HIE_fn_hGetSuperObjectObject(cur)->unk_04, 0);
            }
        }
        i++;
        cur = next;
        b = next = func_0012DCA0(cur);
(void)b;
    }
}
