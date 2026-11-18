/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002A8CD0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} __attribute__((aligned(16))) unk_func_002A8CD0_0;

extern unk_func_002A8CD0_0 D_007B8490;
extern u8 D_007B8488[];
void func_0029D8F0(s32, unk_func_002A8CD0_0 *);

void func_002A8CD0(unk_func_002A8CD0_0 *arg0) {
    D_007B8490 = *arg0;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
