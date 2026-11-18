/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x42];
    u8 unk_42;
} unk_func_001B6DD0_0;

u8 func_001B6DD0(unk_func_001B6DD0_0 *arg0) {
    return (s8)arg0->unk_42 & 8;
}
