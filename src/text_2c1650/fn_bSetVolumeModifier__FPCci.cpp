/* profile: opt_300 */
#include "common.h"

class unk_fn_bSetVolumeModifier__FPCci_0 {
public:
    virtual void *unk_vf08(const char *);
};

extern "C" {
f32 int2dB__Fi(s64);
unk_fn_bSetVolumeModifier__FPCci_0 *fs_roGetInst__Q24usnd16CGlobalVarAccessFv(void);
void func_002CD680(void *, f32);
extern s64 D_00341700[];
}

bool fn_bSetVolumeModifier(const char *arg0, int arg1) {
    unk_fn_bSetVolumeModifier__FPCci_0 *obj = fs_roGetInst__Q24usnd16CGlobalVarAccessFv();
    bool ret = false;
    void *p = obj->unk_vf08(arg0);


    if (p != NULL) {
        if (arg1 < 0) {
            arg1 = 0;
        }
        if (arg1 > 0x7F) {
            arg1 = 0x7F;
        }
        func_002CD680(p, int2dB__Fi(D_00341700[arg1]));
        ret = true;
    }
    return ret;
}
