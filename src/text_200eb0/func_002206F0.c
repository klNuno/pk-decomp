/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u16 unk_04;
    u8 pad_06[0x2];
} unk_func_002206F0_0;

unk_func_002206F0_0 *func_001EB720(unk_func_002206F0_0 *);

unk_func_002206F0_0 *func_002206F0(unk_func_002206F0_0 *arg0, unk_func_002206F0_0 *arg1) {
    if (arg1->unk_04) {
        return arg1 + arg1->unk_04;
    }
    arg0 = func_001EB720(arg0 + 1);
    arg1->unk_04 = arg0 - arg1;
    return arg0;
}
