#include "common.h"

class unk_func_002CD540_0 {
public:
    virtual void unk_vf08();
    virtual void *unk_vf0C(void *, void *, s32);
};

extern "C" {
void func_002CDB60(void *, void *, void *);
unk_func_002CD540_0 *fs_roGetInst__Q24usnd16CGlobalVarAccessFv(void);
void *fs_roGetInst__Q24usnd13CFloatVarTypeFv(void);
void c4sdk_malloc(void *, s32);
void func_002CD680(void *, f32);

bool func_002CD540(void *arg0, f32 arg1) {
    unk_func_002CD540_0 *obj;
    void *p;
    bool ret = false;
    s32 sp48;
    s32 sp4C;

    func_002CDB60(&sp48, arg0, &sp4C);
    obj = fs_roGetInst__Q24usnd16CGlobalVarAccessFv();
    p = obj->unk_vf0C(&sp48, fs_roGetInst__Q24usnd13CFloatVarTypeFv(), 0);
    c4sdk_malloc(&sp48, 0);
    if (p != NULL) {
        ret = true;
        func_002CD680(p, arg1);
    }
    return ret;
}
}
