/* profile: opt_300 */
#include "common.h"

class unk_func_002D6750_0 {
public:
    virtual void *unk_vf08(char *);
};

typedef struct unk_func_002D6750_1 {
    s32 unk_00[15];
} unk_func_002D6750_1;

typedef struct unk_func_002D6750_2 {
    s32 unk_00;
    void *unk_04;
} unk_func_002D6750_2;

typedef struct unk_func_002D6750_3 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D6750_3;

extern "C" {
unk_func_002D6750_0 *fs_roGetInst__Q24usnd16CGlobalVarAccessFv(void);
void func_002CD350(s32, char *, s32);
void *func_002D2BC0(s32);
void *func_002D7A30(void *, void *, s32, s32, unk_func_002D6750_1 *);
void func_002D71B0(unk_func_002D6750_3 *, s32, unk_func_002D6750_2 *);
extern s32 D_00360550;
extern s8 D_00360554;
extern unk_func_002D6750_1 D_0035B0F0;

static inline s32 func_002D6750_ok(unk_func_002D6750_1 *a) {
    return a->unk_00[0] && a->unk_00[1] && a->unk_00[2] && a->unk_00[3] && a->unk_00[4] &&
           a->unk_00[5] && a->unk_00[6] && a->unk_00[7] && a->unk_00[8] && a->unk_00[9] &&
           a->unk_00[10] && a->unk_00[11] && a->unk_00[12] && a->unk_00[13] && a->unk_00[14];
}

s32 func_002D6750(s32 arg0, s32 arg1, unk_func_002D6750_1 *arg2) {
    char sp60[0x100];
    unk_func_002D6750_3 sp160;
    unk_func_002D6750_2 sp168;
    unk_func_002D6750_1 *def;
    s32 ret;
    void *obj;
    void *p;

    if (D_00360554 == 0) {
        D_00360550 = 0;
        D_00360554 = 1;
    }
    def = &D_0035B0F0;
    ret = -1;
    if (arg2 != 0) {
        if (func_002D6750_ok(arg2)) {
            def = arg2;
        }
    }
    func_002CD350(arg1, sp60, 0x100);
    obj = fs_roGetInst__Q24usnd16CGlobalVarAccessFv()->unk_vf08(sp60);
    if (obj != 0) {
        p = func_002D2BC0(0x5C);
        if (p != 0) {
            p = func_002D7A30(p, obj, D_00360550, arg1, def);
        }
        if (p != 0) {
            sp168.unk_04 = p;
            sp168.unk_00 = D_00360550;
            func_002D71B0(&sp160, arg0, &sp168);
            ret = D_00360550;
        }
        D_00360550++;
    }
    return ret;
}
}
