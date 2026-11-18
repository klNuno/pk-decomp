/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00318AB0_0 {
    u8 pad_00[0x4];
    struct unk_func_00318AB0_0 *unk_04;
} unk_func_00318AB0_0;

void func_00119548();
void func_00304B00();

unk_func_00318AB0_0 **func_00318AB0(unk_func_00318AB0_0 **arg0, s16 arg1) {
    unk_func_00318AB0_0 *temp;

    if (arg0 != NULL) {
        while ((temp = *arg0) != NULL) {
            *arg0 = temp->unk_04;
            func_00119548(temp);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
