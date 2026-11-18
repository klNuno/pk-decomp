/* profile: o0 */
#include "common.h"

extern s32 D_003600C4;
extern char D_0034C1F0[];
extern char D_0034C250[];
void func_0011B418();

void SAV2_fn_p_szGetSaveNameOfSaveNumber(s32 arg0) {
    if (D_003600C4++ < 10) {
        func_0011B418(D_0034C1F0, D_0034C250);
    }
}
