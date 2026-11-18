/* profile: opt_300 */
#include "common.h"

class unk_func_002EB4F0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

typedef struct unk_func_002EB4F0_1 {
    u8 pad_00[0x10];
    u32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 unk_2C[4];
} unk_func_002EB4F0_1;

extern "C" {
void c4sdk_malloc(s32 *, s32);
void func_002D0DA0(s32 *, s32 *);
void func_002EB7E0(u8 *, unk_func_002EB4F0_0 *);
void func_002F20D0(unk_func_002EB4F0_1 *, unk_func_002EB4F0_0 *);
void func_003044A0(unk_func_002EB4F0_0 *, s32 *);

void func_002EB4F0(unk_func_002EB4F0_1 *arg0, unk_func_002EB4F0_0 *arg1) {
    s32 temp;
    s32 temp2;
    s32 temp3;

    func_002F20D0(arg0, arg1);
    if (arg0->unk_10 > 1) {
        func_002D0DA0(&temp, &temp3);
        func_003044A0(arg1, &temp);
        c4sdk_malloc(&temp, 0);
    }
    arg1->unk_vf0C(&temp2, 4, 1);
    arg0->unk_28 = temp2;
    func_002EB7E0(arg0->unk_2C, arg1);
    arg1->unk_vf0C(&arg0->unk_18, 4, 1);
    arg1->unk_vf0C(&arg0->unk_1C, 4, 1);
    arg1->unk_vf0C(&arg0->unk_20, 4, 1);
    arg1->unk_vf0C(&arg0->unk_24, 4, 1);
}
}
