/* profile: o0 */
#include "common.h"

void func_001E77A0(void *);

s32 func_001EDC50(void *arg0, void *arg1) {
    (*(void **)((u8 *)arg0 + 0xC)) = (void *) (*(void **)((u8 *)arg0 + 8));
    (*(void **)((u8 *)arg0 + 8)) = arg1;
    func_001E77A0(arg0);
    if ((*(s32 **)((u8 *)arg1 + 4)) == NULL) {
        (*(s32 *)((u8 *)arg0 + 4)) = 0;
    } else {
        (*(s32 *)((u8 *)arg0 + 4)) = (s32) *(*(s32 **)((u8 *)arg1 + 4));
    }
    return 1;
}
