/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x53];
    u8 unk_53;
} unk_func_001C7260_0;

typedef struct {
    u8 pad_00[0x50];
    unk_func_001C7260_0 *unk_50;
} unk_func_001C7260_1;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001C7260_2;

s32 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001C7260_2 *func_00199130(s32);
void func_001A1670(s32, f32);
u8 func_001ABB40(unk_func_001C7260_1 *);
void func_001B0670(s32);
void func_001C2EA0(s32, s32);
void func_001C45C0(s32, s32);
void func_001C4720(s32, unk_func_001C7260_1 *);
void func_001C4780(s32, s32);
void func_001C47F0(s32, unk_func_001C7260_1 *);
void func_001C6BD0(s32, unk_func_001C7260_1 *);
void func_001C8FA0(s32, s32);
void func_001D4610(s32, s32);
void func_001D4B50(s32, s32);
void func_001D4C30(s32);

s32 func_001C7260(s32 arg0, unk_func_001C7260_1 *arg1) {
    s32 obj;

    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    if (func_00199130(obj)->unk_10 == 0) {
        return 0;
    }
    func_001C2EA0(obj, 0);
    func_001C45C0(obj, 1);
    func_001A1670(obj, 0.0f);
    func_001C4780(obj, -1);
    func_001C4720(obj, arg1);
    if (arg1->unk_50 != NULL) {
        func_001D4B50(obj, arg1->unk_50->unk_53);
    } else {
        func_001D4C30(obj);
    }
    func_001C47F0(obj, arg1);
    func_001B0670(arg0);
    func_001C6BD0(obj, arg1);
    func_001D4610(obj, func_001ABB40(arg1));
    if (arg1->unk_50 != NULL) {
        func_001C8FA0(arg0, 0);
    }
    return 1;
}
