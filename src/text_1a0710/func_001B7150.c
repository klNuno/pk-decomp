/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
} unk_func_001B7150_0;

unk_func_001B7150_0 *HIE_fn_hGetSuperObjectObject(void *);
u8 func_001B7100(void *);

u8 func_001B7150(void *arg0) {
    void *temp;

    temp = arg0 != NULL ? HIE_fn_hGetSuperObjectObject(arg0)->unk_14 : NULL;
    return temp != NULL ? func_001B7100(temp) : 1;
}
