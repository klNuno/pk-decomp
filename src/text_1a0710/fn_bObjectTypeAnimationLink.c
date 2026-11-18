/* profile: o0_301_p */
#include "common.h"

typedef struct unk_fn_bObjectTypeAnimationLink_0 {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_fn_bObjectTypeAnimationLink_0;

typedef struct unk_fn_bObjectTypeAnimationLink_1 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_fn_bObjectTypeAnimationLink_1;

s32 func_001971C0(s32);
s32 HIE_fn_hGetSuperObjectFather(s32);
unk_fn_bObjectTypeAnimationLink_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001BE470(s32);
unk_fn_bObjectTypeAnimationLink_1 *func_001BC790(s32);
s32 fn_h_StandardGameGetSuperObject(s32);
s32 func_001A7D80();
s32 func_001A7D60(s32);
s32 func_001A7D90(s32);
s32 func_001A8D90(s32);
s32 func_001A8D60(s32);
s32 func_001A8D40(s32);
s32 func_001A8D20(s32);
s32 func_001A8D00(s32);

s32 fn_bObjectTypeAnimationLink(s32 arg0, s32 arg1) {
    s32 father;
    s32 node;
    s32 it;
    s32 i;
    s32 x;
    s32 next;
    s32 target;
    s32 y;
    s32 so;
    s32 first;

    if (func_001971C0(arg0) != 2) {
        father = HIE_fn_hGetSuperObjectFather(arg0);
        while (father != 0 && func_001971C0(father) != 2) {
            father = HIE_fn_hGetSuperObjectFather(father);
        }
        arg0 = father;
        if (arg0 == 0) {
            return 1;
        }
    }
    if (HIE_fn_hGetSuperObjectObject(arg0)->unk_20 != 0) {
        target = func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20);
        so = fn_h_StandardGameGetSuperObject(func_001BC790(arg1)->unk_04);
        for (it = func_001A7D80(); it != 0; it = func_001A7D90(it)) {
            x = func_001A7D60(it);
            if (arg0 == x) {
                return 1;
            }
        }
        y = func_001BE470(HIE_fn_hGetSuperObjectObject(so)->unk_20);
        if (target == y) {
            return 1;
        }
        i = func_001A8D90(y);
        first = node = func_001A8D60(y);
        while (i != 0) {
            if ((void *)func_001A8D40(node) == (void *)target) {
                return func_001A8D20(node) != 0;
            }
            i--;
            next = node = func_001A8D00(node);
            (void)next;
        }
    }
    return 1;
}
