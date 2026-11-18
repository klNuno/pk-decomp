/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x37];
    u8 unk_37;
} unk_func_0019FC00_0;

u8 func_0019FC00(unk_func_0019FC00_0 *arg0, u8 arg1) {
    return (s8)arg0->unk_37 & (s8)arg1;
}
