/* profile: opt */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002EAF50_0;

typedef struct {
    s32 unk_00;
} unk_func_002EAF50_1;

void func_002CFEF0(unk_func_002EAF50_1 *);
void func_002D2BB0(s32);
void func_002D4240(s32, s32);
s32 *func_002EAFD0(s32 *);

void func_002EAF50(unk_func_002EAF50_0 *arg0, unk_func_002EAF50_1 arg1) {
    s32 temp_s0 = arg1.unk_00;

    s32 temp = *func_002EAFD0(&arg0->unk_08);

    {
        s32 temp2 = *(volatile s32 *)&arg1.unk_00;
        if (temp2 == temp) {
            func_002CFEF0(&arg1);
            arg0->unk_0C = arg1.unk_00;
        }
    }
    func_002D4240(temp_s0, arg0->unk_04);
    func_002D2BB0(temp_s0);
    arg0->unk_00--;
}
