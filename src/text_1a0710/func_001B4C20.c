/* profile: o0_301 */
#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_001B4C20_0;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001B4C20_0 *unk_10;
} unk_func_001B4C20_1;

void memcpy();

void func_001B4C20(unk_func_001B4C20_1 *arg0, unk_func_001B4C20_1 *arg1) {
    memcpy((void *)arg0->unk_10->unk_00, (void *)arg1->unk_10->unk_00, 0x7C);
}
