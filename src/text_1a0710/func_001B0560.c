/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x60];
} unk_func_001B0560_0;

typedef struct {
    u8 pad_00[0x10];
} unk_func_001B0560_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001B0560_2;

unk_func_001B0560_2 *HIE_fn_hGetSuperObjectObject(s32);
u8 func_0019ABE0(s32);
void func_00154B00(unk_func_001B0560_0 *, s32);
s32 func_001979C0(s32);
void *func_00155EE0(s32);
void func_001559E0(unk_func_001B0560_1 *, unk_func_001B0560_0 *, void *);
s32 func_001E43E0(unk_func_001B0560_1 *, s32);

s32 func_001B0560(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_001B0560_0 sp10;
    unk_func_001B0560_1 sp70;

    if (func_0019ABE0(HIE_fn_hGetSuperObjectObject(arg2)->unk_04) != 1) {
        return 0;
    }
    func_00154B00(&sp10, arg1);
    func_001559E0(&sp70, &sp10, func_00155EE0(func_001979C0(arg2)));
    return func_001E43E0(&sp70, arg0);
}
