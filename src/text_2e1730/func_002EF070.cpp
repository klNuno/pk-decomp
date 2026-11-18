#include "common.h"

extern "C" {

typedef struct unk_func_002EF070_0 {
    struct unk_func_002EF070_0 *unk_00;
    struct unk_func_002EF070_0 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
} unk_func_002EF070_0;

class unk_func_002EF070_1 {
public:
    unk_func_002EF070_0 *unk_00;
    u8 unk_04;
    unk_func_002EF070_1(unk_func_002EF070_0 *const &a, const u8 &b) : unk_00(a), unk_04(b) {}
};

s32 func_002EF690(void *, void *);
unk_func_002EF070_0 *func_002EF6A0(void *, void *, bool, bool, void *);
extern u8 D_0035F710;
extern u8 D_0035F714;

unk_func_002EF070_1 func_002EF070(unk_func_002EF070_0 *arg1, void *arg2) {
    unk_func_002EF070_0 *var_s0;
    unk_func_002EF070_0 *var_s1;
    unk_func_002EF070_0 *var_s6;
    bool var_s2;
    bool var_s3;
    unk_func_002EF070_0 *temp;

    var_s6 = (unk_func_002EF070_0 *)&arg1->unk_04;
    var_s2 = 1;
    var_s3 = 1;
    var_s1 = arg1->unk_04;
    var_s0 = 0;
    while (var_s1 != 0) {
        var_s6 = var_s1;
        if (func_002EF690(arg2, var_s1->unk_0C) != 0) {
            var_s1 = var_s1->unk_00;
            var_s2 = 1;
        } else {
            var_s0 = var_s1;
            var_s1 = var_s1->unk_04;
            var_s2 = 0;
            var_s3 = 0;
        }
    }
    if (var_s0 == 0 || func_002EF690(var_s0->unk_0C, arg2) != 0) {
        temp = func_002EF6A0(arg1, var_s6, var_s2, var_s3, arg2);
        return unk_func_002EF070_1(temp, D_0035F710);
    }
    return unk_func_002EF070_1(var_s0, D_0035F714);
}

}
