/* profile: o0_301 */
#include "common.h"

typedef struct unk_fn_bObjectTypeAnimationInfo_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_fn_bObjectTypeAnimationInfo_0;

typedef struct unk_fn_bObjectTypeAnimationInfo_1 {
    unk_fn_bObjectTypeAnimationInfo_0 *unk_00;
} unk_fn_bObjectTypeAnimationInfo_1;

typedef struct unk_fn_bObjectTypeAnimationInfo_2 {
    u8 pad_00[0x4];
    unk_fn_bObjectTypeAnimationInfo_1 unk_04;
} unk_fn_bObjectTypeAnimationInfo_2;

typedef struct unk_fn_bObjectTypeAnimationInfo_3 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_fn_bObjectTypeAnimationInfo_3;

unk_fn_bObjectTypeAnimationInfo_2 *fn_hGetSuperObjectActorHandle();
unk_fn_bObjectTypeAnimationInfo_3 *HIE_fn_hGetSuperObjectObject();
s32 fn_ucIsAnAlwaysObject();
s32 func_0011D3F8();
s32 func_0011D588();
s32 func_0011D8F0();
s32 func_00197860();
char *func_001ABA70();
extern char D_0034B408[];
extern char D_0034B410[];
extern char D_0034B418[];
extern char D_0034B420[];
extern char D_0034B430[];
extern char D_0034B438[];

s32 fn_bObjectTypeAnimationInfo(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_fn_bObjectTypeAnimationInfo_2 *actor;
    unk_fn_bObjectTypeAnimationInfo_0 *p;
    s32 ret;
    char *str;
    s32 obj;
    s32 anim;
    char *name;
    s32 unused;
    unk_fn_bObjectTypeAnimationInfo_1 h;

    ret = 0;
    actor = fn_hGetSuperObjectActorHandle(arg0);
    if (actor != 0) {
        obj = HIE_fn_hGetSuperObjectObject(actor)->unk_00;
        h = actor->unk_04;
        p = h.unk_00;
        if (obj != 0 && p != 0 && func_0011D8F0(arg2, D_0034B408, (u32)arg3) != 0) {
            str = D_0034B410;
            if (fn_ucIsAnAlwaysObject(p) == 0) {
                unused = HIE_fn_hGetSuperObjectObject(actor)->unk_0C;
                if (p->unk_0C != 0) {
                    str = D_0034B418;
                } else {
                    str = D_0034B420;
                }
            }
            if (func_0011D588(arg2, str, arg3 - func_0011D3F8(arg2)) != 0) {
                anim = func_00197860(obj);
                if (anim != 0 && func_0011D588(arg2, D_0034B430, arg3 - func_0011D3F8(arg2)) != 0) {
                    name = func_001ABA70(anim);
                    if (name != 0) {
                        func_0011D588(arg2, name, arg3 - func_0011D3F8(arg2));
                    }
                }
                ret = 1;
            }
        }
    } else if (arg0 == -1) {
        ret = func_0011D8F0(arg2, D_0034B438, (u32)arg3) != 0;
    }
    return ret;
}
