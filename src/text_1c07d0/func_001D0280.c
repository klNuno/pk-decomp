/* profile: o0_301 */
#include "common.h"

s32 VMS_lLoadFileAndExtractUnknowData(s32, s32, u8 **, s32 *);
s32 fn_vCheckSum(void *, s32);
void fn_vDecryptBuffer(void *, s32);
void func_00119548(u8 *);
u8 *malloc(s32);
void *memcpy(u8 *, const void *, u32);

s32 func_001D0280(s32 arg0, s32 arg1, u8 **arg2, s32 *arg3) {
    s32 ret;
    s32 sum;
    s32 stored;
    u8 *buf;

    ret = VMS_lLoadFileAndExtractUnknowData(arg0, arg1, (u8 **)(s32)&buf, arg3);
    if (ret != 1) {
        return 0;
    }
    *arg2 = malloc(*arg3 - 0x10);
    memcpy(*arg2, buf + 0x10, *arg3 - 0x10);
    func_00119548(buf);
    *arg3 = *arg3 - 0x10;
    fn_vDecryptBuffer(*arg2, *arg3);
    sum = fn_vCheckSum(*arg2, *arg3 - 4);
    memcpy((u8 *)&stored, (u8 *)(void *)*arg2 + *arg3 - 4, 4);
    if (sum != stored) {
        func_00119548(*arg2);
        return 0;
    }
    *arg3 = *arg3 - 4;
}
