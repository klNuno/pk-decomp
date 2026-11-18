/* profile: opt_300 */
#include "common.h"

extern "C" {
void c4sdk_malloc(void *, s32);
void func_002CD230(void *, void *, s32);
void func_002CDB60(void *, void *, void *);
void func_002CDC10(void *, void *);
void func_002DD1C0(void *, u32);
extern char D_0035B840[];

void func_002DCF60(s32 arg0, s32 arg1) {
    u32 *sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    u32 i;
    u32 n;

    func_002CDB60(&sp34, D_0035B840, &sp3C);
    func_002CD230(&sp38, &sp34, arg1);
    func_002CDC10(&sp30, &sp38);
    c4sdk_malloc(&sp38, 0);
    c4sdk_malloc(&sp34, 0);
    n = *sp30;
    if (n > 0xC7) {
        n = 0xC7;
    }
    for (i = 0; i < n; i++) {
        func_002DD1C0(&sp30, i);
    }
    c4sdk_malloc(&sp30, 0);
}
}
