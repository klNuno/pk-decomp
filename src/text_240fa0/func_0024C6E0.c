/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C;
} unk_func_0024C6E0_0;

void func_0024C3C0();

void func_0024C6E0(unk_func_0024C6E0_0 *arg0, s32 arg1) {
    u16 n;
    u16 i;

    n = arg0->unk_1C;
    switch (arg1) {
    case 1:
        for (i = 0; i < n - 1; i++) {
            func_0024C3C0(arg0, (u8)i, (u8)(i + 1));
        }
        break;
    case 0:
        func_0024C3C0(arg0, 0, 2);
        break;
    case 3:
    case 2:
        for (i = 0; i < n - 1; i++) {
            func_0024C3C0(arg0, (u8)i, (u8)(i + 1));
        }
        break;
    }
}
