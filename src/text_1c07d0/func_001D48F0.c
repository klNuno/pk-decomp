/* profile: o0 */
#include "common.h"

typedef struct unk_func_001D48F0_0 {
    u8 pad_00[0x136];
    u8 unk_136;
    s8 unk_137;
} unk_func_001D48F0_0;

void func_001D48F0(unk_func_001D48F0_0 *arg0, u8 arg1) {
    arg0->unk_136 = arg1;
    if (arg0->unk_137 >= arg0->unk_136) {
        arg0->unk_137 = 0;
    }
}
