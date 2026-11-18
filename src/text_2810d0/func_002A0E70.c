/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} __attribute__((aligned(16))) unk_func_002A0E70_0;

extern unk_func_002A0E70_0 D_007B84D0;
extern u8 D_007B8488[];
void func_0029D8F0();

void func_002A0E70(unk_func_002A0E70_0 *arg0) {
    D_007B84D0 = *arg0;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, &D_007B84D0);
    }
}
