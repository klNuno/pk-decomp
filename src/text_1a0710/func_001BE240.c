/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);
void func_00131E90(s32, s32);
void func_00131F70(s32, s32);
void func_00132050(s32);
s32 func_00197CC0(s32);
void func_001BE300(s32, s32);

void func_001BE240(s32 arg0, s32 arg1) {
    void *temp_s0;
    temp_s0 = *(void **)((u8 *)(HIE_fn_hGetSuperObjectObject(arg1)) + 0x20);
    func_00132050((*(s32 *)((u8 *)temp_s0 + 4)));
    if (func_00197CC0((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg1)) + 4))) & 0xFF) {
        func_00131E90(arg0, (*(s32 *)((u8 *)temp_s0 + 4)));
    } else {
        func_00131F70(arg0, (*(s32 *)((u8 *)temp_s0 + 4)));
    }
    if ((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg1)) + 0x1C)) != 0) {
        func_001BE300(arg0, arg1);
    }
}
