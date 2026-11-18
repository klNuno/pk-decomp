/* profile: o0 */
#include "common.h"

void func_001EDC50(void *, s32);

void func_001D3020(void *arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)arg0 + 8)) != arg1) {
        func_001EDC50(arg0, arg1);
    }
}
