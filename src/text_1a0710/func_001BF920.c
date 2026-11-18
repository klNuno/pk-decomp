/* profile: o0 */
#include "common.h"

typedef struct unk_func_001BF920_0 {
    u8 pad_00[0x1D];
    u8 unk_1D;
    u8 unk_1E;
    u8 unk_1F;
} unk_func_001BF920_0;

void func_00133270(u8 *, s32);

void func_001BF920(unk_func_001BF920_0 *arg0) {
    func_00133270(&arg0->unk_1D, 0x80);
    func_00133270(&arg0->unk_1E, 0x80);
    func_00133270(&arg0->unk_1F, 0x80);
}
