/* profile: o0 */
#include "common.h"

void func_001EE5A0(s32);

void func_001BB5B0(void *arg0) {
    if (arg0 != NULL) {
        if ((*(s32 *)((u8 *)arg0 + 0)) != 0) {
            func_001EE5A0((*(s32 *)((u8 *)arg0 + 0)));
        }
        (*(s32 *)((u8 *)arg0 + 0)) = 0;
        (*(s32 *)((u8 *)arg0 + 4)) = -1;
        (*(s8 *)((u8 *)arg0 + 8)) = 0;
    }
}
