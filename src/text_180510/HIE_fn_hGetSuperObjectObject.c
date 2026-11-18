/* profile: o0 */
#include "common.h"

s32 HIE_fn_hGetSuperObjectObject(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
