/* profile: o0_301 */
#include "common.h"

void *HMU_fn_p_vMalloc(s32, s32);
void func_00197950(void *, s32);
void func_00197DF0(void *, s32);
void func_001A4290(void *, s32);
void func_001A4520(void *, s32);
s32 func_001BEBA0(void);
void func_001BEDF0(void *, s32);
void func_001BEE20(void *, s32);
void func_001BEE50(void *, s32);
void func_001BEE80(void *, s32);
void func_001BEEB0(void *, s32);
void func_001BEEE0(void *, s32);

void *func_001BECD0(void) {
    void *p;

    p = HMU_fn_p_vMalloc(func_001BEBA0(), 0);
    func_001BEEE0(p, 0);
    func_001BEEB0(p, 0x46);
    func_001BEE80(p, 0x50);
    func_00197DF0(p, 0);
    func_00197950(p, 1);
    func_001A4290(p, 0);
    func_001A4520(p, 0);
    func_001BEE50(p, 0x46);
    func_001BEE20(p, 5);
    func_001BEDF0(p, 2);
    return p;
}
