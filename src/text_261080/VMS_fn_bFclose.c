/* profile: o0_301 */
#include "common.h"

typedef struct unk_VMS_fn_bFclose_0 {
    s32 unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u16 unk_20;
    u16 unk_22;
    s32 unk_24;
    u16 unk_28;
    u8 pad_2A[0x6];
    void *unk_30;
    s8 unk_34;
} unk_VMS_fn_bFclose_0;

s32 SVG_fn_bGetActiveVms();
s32 fn_bSaveFileInSlot(s32, s32, s32, s32, s32, s32, s32, u16, u16, s32, u16, void *, s32);
void func_00119548(void *);

s32 VMS_fn_bFclose(unk_VMS_fn_bFclose_0 *arg0) {
    s32 ret;
    s32 vms;

    ret = 1;
    vms = SVG_fn_bGetActiveVms();
    if (vms == -1) {
        ret = 0;
    }
    if (arg0->unk_34 == 'w' && ret == 1) {
        if (fn_bSaveFileInSlot(vms, arg0->unk_08, arg0->unk_0C, arg0->unk_10, (u32)arg0->unk_14, arg0->unk_18, arg0->unk_1C, arg0->unk_20, arg0->unk_22, arg0->unk_24, arg0->unk_28, arg0->unk_30, arg0->unk_00 + 1) == 0) {
            ret = 0;
        }
    }
    func_00119548(arg0->unk_30);
    func_00119548(arg0);
    return ret;
}
