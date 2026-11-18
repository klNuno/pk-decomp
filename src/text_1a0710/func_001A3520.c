/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001A3520_0;

void *HIE_fn_hGetSuperObjectFather(s32);
unk_func_001A3520_0 *HIE_fn_hGetSuperObjectObject(s32);
void func_00197900();
void func_001979E0();
void func_00197B50();
u8 func_00197CC0();
u8 func_00197E40();
s32 func_00197E90();
u8 func_00198020();
u8 func_001A3660();
extern void *D_0035FF68;
extern s32 D_0035FF70;
extern u8 D_005ACAD3[];

void func_001A3520(s32 arg0, u8 arg1) {
    unk_func_001A3520_0 *obj;

    obj = HIE_fn_hGetSuperObjectObject(arg0);
    if (func_00197E40(obj->unk_04) == 1 && func_001A3660(obj->unk_04) <= D_005ACAD3[0] &&
        ((arg1 && (!func_00197E90(obj->unk_04) || func_00198020(obj->unk_04) < 2)) || !func_00197E90(obj->unk_04)) &&
        HIE_fn_hGetSuperObjectFather(arg0) == D_0035FF68) {
        if (func_00197CC0(HIE_fn_hGetSuperObjectObject(arg0)->unk_04) != 0) {
            func_00197B50(D_0035FF70, arg0);
        } else {
            func_001979E0(D_0035FF70, arg0);
        }
        func_00197900(obj->unk_04, 1);
    }
}
