/* profile: o0 */
#include "common.h"

void func_001EE5A0(s32);

void func_001BB620(void *arg0, s32 arg1, s8 arg2) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        if ((*(s32 *)((u8 *)arg0 + 0)) != 0) {
            func_001EE5A0((*(s32 *)((u8 *)arg0 + 0)));
        }
        (*(s32 *)((u8 *)arg0 + 0)) = arg1;
        (*(s32 *)((u8 *)arg0 + 4)) = 0;
        (*(s8 *)((u8 *)arg0 + 8)) = arg2;
    }
}
