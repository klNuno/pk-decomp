/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    void *unk_10;
    s32 unk_14;
    u8 pad_18[0x14];
    void *unk_2C;
    void *unk_30;
    void *unk_34;
} unk_func_002F9090_0;

class unk_func_002F9090_1 {
public:
    s32 unk_00;
};

class unk_func_002F9090_2 : public unk_func_002F9090_1 {
public:
    virtual void unk_vf08(const void *, s32, s32);
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002F9090_3;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F9090_4;

extern "C" {
s32 func_002F8CD0(unk_func_002F9090_0 *, s32);
void func_002F8D90(unk_func_002F9090_0 *, unk_func_002F9090_2 *);

void func_002F9090(unk_func_002F9090_0 *arg0, unk_func_002F9090_2 *arg1)
{
    unk_func_002F9090_3 sp48;
    unk_func_002F9090_4 sp58;
    sp48.unk_00 = 0x46464952;
    volatile s32 *temp;
    *(temp = &sp48.unk_04) = 4;
    *temp += 8;
    *temp += arg0->unk_04;
    if (arg0->unk_30) {
        *temp += 8;
        *temp += 8;
    }
    if (arg0->unk_10) {
        *temp += 8;
        s32 n = *(volatile s32 *)&arg0->unk_08;
        *temp += n;
    } else {
        *temp += 8;
        *temp += 4;
    }
    *temp += func_002F8CD0(arg0, 1);
    if (*temp % 2) {
        (*temp)++;
    }
    sp48.unk_08 = 0x45564157;
    arg1->unk_vf08(&sp48, 0xC, 1);

    sp58.unk_00 = 0x20746D66;
    sp58.unk_04 = arg0->unk_04;
    arg1->unk_vf08(&sp58, 8, 1);
    arg1->unk_vf08(arg0->unk_2C, arg0->unk_04, 1);
    if (arg0->unk_30) {
        sp58.unk_00 = 0x33706D75;
        sp58.unk_04 = 8;
        arg1->unk_vf08(&sp58, 8, 1);
        arg1->unk_vf08(arg0->unk_30, sp58.unk_04, 1);
    }
    if (arg0->unk_10) {
        sp58.unk_00 = 0x61746164;
        sp58.unk_04 = arg0->unk_08;
        arg1->unk_vf08(&sp58, 8, 1);
        arg1->unk_vf08(arg0->unk_10, arg0->unk_08, 1);
    } else {
        sp58.unk_00 = 0x78746164;
        sp58.unk_04 = 8;
        arg1->unk_vf08(&sp58, 8, 1);
        arg1->unk_vf08(&arg0->unk_08, 4, 1);
        arg1->unk_vf08(&arg0->unk_14, 4, 1);
    }
    if (arg0->unk_34) {
        func_002F8D90(arg0, arg1);
    }
}
}
