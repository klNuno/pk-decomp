/* profile: o0 */
#include "common.h"

typedef struct unk_func_001CF340_0 {
    u8 pad_00[0xC];
} unk_func_001CF340_0;

extern unk_func_001CF340_0 D_005E4380[];

unk_func_001CF340_0 *func_001CF340(u16 arg0) {
    return &D_005E4380[arg0];
}
