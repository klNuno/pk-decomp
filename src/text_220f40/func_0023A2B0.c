/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0023A2B0_0;

typedef union {
    void *unk_00;
    unk_func_0023A2B0_0 unk_04;
} unk_func_0023A2B0_1;

extern s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023A2B0_1 *);
extern void *func_001979C0(void *);
extern void func_00155EC0(void *, unk_func_0023A2B0_0 *);
extern void func_00155E80(void *, unk_func_0023A2B0_0 *);
extern void func_0019A230(void *);
extern void func_0012D940(void *);
extern void func_001D0660(void *, unk_func_0023A2B0_0 *);
extern void func_001EDBB0(s32, void *);
extern s32 *func_002399C0(s32, s32 *, unk_func_0023A2B0_0 *, unk_func_0023A2B0_0 *, void *, u8);

s32 *func_0023A2B0(s32 arg0, s32 *arg1) {
    u8 temp;
    void *temp2;
    unk_func_0023A2B0_0 *temp3;
    s32 temp4;
    unk_func_0023A2B0_1 sp50;
    unk_func_0023A2B0_0 sp60, sp70;

    temp4 = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp2 = sp50.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp3 = &sp50.unk_04;
    func_00155EC0(func_001979C0(temp2), &sp60);
    sp70.unk_00 = temp3->unk_00 - sp60.unk_00;
    sp70.unk_04 = temp3->unk_04 - sp60.unk_04;
    sp70.unk_08 = temp3->unk_08 - sp60.unk_08;
    func_00155E80(func_001979C0(temp2), temp3);
    func_0019A230(temp2);
    func_0012D940(temp2);
    func_001D0660(temp2, &sp70);

    switch (temp4) {
    case 0x1D5:
        temp = 0;
        return arg1;
    case 0x1D6:
        temp = 1;
        break;
    case 0x1D7:
        temp = 2;
        break;
    case 0x1D8:
        temp = 3;
        break;
    case 0x1D9:
        temp = 4;
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }

    if (temp > 4) {
        temp = 4;
    }
    arg1 = func_002399C0(arg0, arg1, &sp50.unk_04, &sp70, temp2, temp);
    return arg1;
}
