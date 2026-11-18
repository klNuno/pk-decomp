/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x6];
    u8 unk_06;
} unk_func_001EBC30_0;

u8 func_001EBC30(unk_func_001EBC30_0 *arg0, u8 arg1) {
    return arg0->unk_06 == arg1;
}
