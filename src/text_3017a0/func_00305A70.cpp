/* profile: opt_noexc */
#include "common.h"

class unk_func_00305A70_0 {
public:
    virtual void unk_vf08();
};

typedef struct unk_func_00305A70_1 {
    u8 pad_00[0xC];
    s32 unk_0C;
    unk_func_00305A70_0 *unk_10;
} unk_func_00305A70_1;

extern "C" {
void func_00305A70(unk_func_00305A70_1 *arg0) {
    arg0->unk_10->unk_vf08();
}
}
