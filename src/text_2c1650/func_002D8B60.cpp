/* profile: opt_300 */
#include "common.h"

class unk_func_002D8B60_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28(s32);
};

extern "C" {
extern unk_func_002D8B60_0 *D_00360578;
extern s32 D_0036057C;
extern volatile s32 D_0036058C;

void func_002D8B60(void) {
    D_00360578->unk_vf28(D_0036057C);
    while (D_0036058C == 0) {
    }
}
}
