/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    void *unk_04;
    void *unk_08;
    u8 pad_0C[0x69];
    u8 unk_75;
} unk_func_001B4E30_0;

void memcpy();

void func_001B4E30(unk_func_001B4E30_0 *arg0) {
    memcpy((void *)arg0->unk_04, (void *)arg0->unk_08, 0x7C);
    arg0->unk_75 &= 0xFD;
}
