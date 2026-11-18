/* profile: o0 */
#include "common.h"

typedef struct unk_SAV2_fn_vGetElementFlagSave_0 {
    u8 pad_00[0x10];
    u8 unk_10;
} unk_SAV2_fn_vGetElementFlagSave_0;

u8 SAV2_fn_vGetElementFlagSave(unk_SAV2_fn_vGetElementFlagSave_0 *arg0) {
    return (s8)arg0->unk_10 & 0x20;
}
