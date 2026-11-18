/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x122];
    u8 unk_122;
    s8 unk_123;
} unk_func_001D4780_0;

void func_001D4780(unk_func_001D4780_0 *arg0, u8 arg1) {
    arg0->unk_122 = arg1;
    if (arg0->unk_123 >= arg0->unk_122) {
        arg0->unk_123 = 0;
    }
}
