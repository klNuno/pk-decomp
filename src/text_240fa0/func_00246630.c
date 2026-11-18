/* profile: o0 */
#include "common.h"

void func_00246310(void *);
void func_00246340(void *);

void func_00246630(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        func_00246310(arg0);
    }
    (*(s32 *)((u8 *)arg0 + 0x18)) = arg1;
    func_00246340(arg0);
}
