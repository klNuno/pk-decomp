/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00149900_0 {
    s32 unk_00;
    u8 pad_04[0x18];
    struct unk_func_00149900_0 *unk_1C;
} unk_func_00149900_0;

unk_func_00149900_0 *func_00149900(unk_func_00149900_0 *arg0) {
    while (arg0->unk_00 != 2) {
        arg0 = arg0->unk_1C;
        if (arg0 == NULL) {
            return arg0;
        }
    }
    return arg0;
}
