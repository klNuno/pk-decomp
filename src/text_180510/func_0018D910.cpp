/* profile: opt */
#include "common.h"

class unk_func_0018D910_0 {
public:
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    virtual void unk_vf08(s32);
};

typedef struct unk_func_0018D910_1 {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[0xC];
    unk_func_0018D910_0 **unk_18;
} unk_func_0018D910_1;

extern "C" {
void func_0018D9E0(void);
extern u32 D_0035FE1C;
extern unk_func_0018D910_1 *D_005050F0[];

void func_0018D910(void) {
    u32 i;
    u32 j;
    unk_func_0018D910_1 *p;
    unk_func_0018D910_0 *o;

    func_0018D9E0();
    for (i = 0; i < D_0035FE1C; i++) {
        if (D_005050F0[i] != 0) {
            p = D_005050F0[i];
            for (j = 0; j < p->unk_08; j++) {
                o = p->unk_18[j];
                if (o->unk_00 != 4) {
                    o->unk_vf08(o->unk_00);
                }
            }
        }
    }
    D_0035FE1C = 0;
}
}
