/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 *unk_04;
    u16 unk_08;
} unk_func_001AB770_0;

void *memcpy(void *, const void *, u32);

void func_001AB770(unk_func_001AB770_0 *arg0) {
    memcpy(arg0->unk_00, arg0->unk_04, arg0->unk_08 * 0x14);
}
