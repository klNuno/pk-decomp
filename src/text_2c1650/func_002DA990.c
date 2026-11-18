/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002DA990_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002DA990_0;

typedef struct unk_func_002DA990_1 {
    s32 unk_00;
    unk_func_002DA990_0 *unk_04;
} unk_func_002DA990_1;

unk_func_002DA990_0 *func_002D2BC0(s32);
void func_002DA430(unk_func_002DA990_0 *);
void func_002DADD0(void *, void *, unk_func_002DA990_1 *);
void func_002FD3F0(s32, s32);
s32 func_002FD530(s32);
s32 func_002FE280();
extern s32 D_003605A8;
extern s8 D_003605AC;
extern u8 D_007BEB20[];

static inline void func_002DA990_inl(unk_func_002DA990_0 *p, s32 arg1, s32 arg2) {
    p->unk_00 = D_007BEB20;
    p->unk_04 = arg1;
    p->unk_08 = arg2;
    func_002DA430(p);
}

s32 func_002DA990(void *arg0) {
    s32 var = -1;
    s32 temp;
    unk_func_002DA990_0 *temp2;
    u8 sp50[8];
    unk_func_002DA990_1 sp58;

    temp = func_002FD530(func_002FE280());
    if (temp != 0) {
        if (!D_003605AC) {
            D_003605A8 = 1;
            D_003605AC = 1;
        }
        temp2 = func_002D2BC0(0xC);
        if (temp2 != NULL) {
            func_002DA990_inl(temp2, ++D_003605A8, temp);
        }
        if (temp2 != NULL) {
            sp58.unk_00 = D_003605A8;
            sp58.unk_04 = temp2;
            func_002DADD0(sp50, arg0, &sp58);
            var = D_003605A8;
        } else {
            func_002FD3F0(func_002FE280(), temp);
        }
    }
    return var;
}
