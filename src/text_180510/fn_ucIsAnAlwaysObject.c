/* profile: o0 */
#include "common.h"

void fn_bStandardGameIsAlways(s32);

void fn_ucIsAnAlwaysObject(void *arg0) {
    fn_bStandardGameIsAlways((*(s32 *)((u8 *)arg0 + 4)));
}
