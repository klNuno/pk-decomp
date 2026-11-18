/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B9640_0 {
    u8 pad_00[0x1C];
    u8 *unk_1C;
} unk_func_001B9640_0;

s32 func_001B9A50(void *);
s32 func_001B9740(void *);
u32 func_001B8D40(void);
void *memcpy(void *, void *, u32);
void func_001B86B0(void *, s32);
void func_00165B10(s32, s32);
void func_001B9760(void *, s32);

void func_001B9640(unk_func_001B9640_0 *arg0, unk_func_001B9640_0 *arg1) {
    s32 temp0;
    s32 temp1;
    s32 temp2;

    temp0 = func_001B9A50(arg0->unk_1C);
    temp1 = func_001B9740(arg0->unk_1C);
    memcpy(arg0->unk_1C, arg1->unk_1C, func_001B8D40());
    func_001B86B0(arg0->unk_1C, temp0);
    temp2 = func_001B9A50(arg0->unk_1C);
    func_00165B10(temp2, func_001B9A50(arg1->unk_1C));
    func_001B9760(arg0->unk_1C, temp1);
}
