/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001A2B20_0;

s32 func_001971E0();
s32 func_0012DCA0();
s32 func_001971C0();
unk_func_001A2B20_0 *HIE_fn_hGetSuperObjectObject();
s32 func_00197CC0();
void func_0012D6F0();

void func_001A2B20(s32 arg0) {
    s32 c;
    s32 n;
    s32 t0;
    s32 i;
    s32 j;
    s32 t3;
    s32 t2;
    s32 t1;
    s32 c2;
    s32 n2;

    for (i = 0, c = func_001971E0(arg0), t0 = n = func_0012DCA0(c), (void)t0; c != 0; i++, c = n, t1 = n = func_0012DCA0(c), (void)t1) {
        if (func_001971C0(c) == 2) {
            if (!(u8)func_00197CC0(HIE_fn_hGetSuperObjectObject(c)->unk_04)) {
                break;
            }
            for (j = 0, c2 = func_001971E0(c), t2 = n2 = func_0012DCA0(c2), (void)t2; c2 != 0; j++, c2 = n2, t3 = n2 = func_0012DCA0(c2), (void)t3) {
                if (func_001971C0(c2) == 2) {
                    func_0012D6F0(c2, arg0, 0);
                }
            }
        }
    }
}
