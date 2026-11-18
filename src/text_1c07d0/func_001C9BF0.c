/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x89];
    u8 unk_89;
} unk_func_001C9BF0_0;

void func_001C9BF0(unk_func_001C9BF0_0 *arg0, s8 arg1) {
    arg0->unk_89 = (s8)arg0->unk_89 + arg1;
}
