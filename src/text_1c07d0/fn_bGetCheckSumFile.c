/* profile: o0_301 */
#include "common.h"

s32 VMS_lLoadFileAndExtractUnknowData(s32, s32, u8 **, s32 *);
void fn_vDecryptBuffer(u8 *, s32);
void func_00119548(u8 *);
void memcpy(void *, void *, s32);

s32 fn_bGetCheckSumFile(s32 arg0, s32 arg1, void *arg2) {
    u8 *sp28;
    s32 sp2C;
    s32 temp;

    temp = VMS_lLoadFileAndExtractUnknowData(arg0, arg1, (u8 **)&sp28, &sp2C);
    if (temp != 1) {
        return 0;
    }
    fn_vDecryptBuffer(sp28, sp2C);
    memcpy((void *)arg2, (void *)(sp28 + sp2C - 4), 4);
    func_00119548(sp28);
    return 1;
}
