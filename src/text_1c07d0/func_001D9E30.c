/* profile: o0 */
#include "common.h"

void func_0011B418();
extern char D_0034C1F0[];
extern char D_0034C210[];
extern s32 D_003600BC;

s32 func_001D9E30(s32 arg0) {
    if (D_003600BC++ < 10) {
        func_0011B418(D_0034C1F0, D_0034C210);
    }
    return 0;
}
