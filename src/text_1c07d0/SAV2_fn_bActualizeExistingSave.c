/* profile: o0 */
#include "common.h"

extern s32 D_003600C0;
extern char D_0034C1F0[];
extern char D_0034C230[];
void func_0011B418();

s32 SAV2_fn_bActualizeExistingSave(void) {
    if (D_003600C0++ < 10) {
        func_0011B418(D_0034C1F0, D_0034C230);
    }
    return 1;
}
