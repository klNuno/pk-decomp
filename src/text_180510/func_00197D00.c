/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00197D00_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00197D00_0;

s32 fn_h_StandardGameGetSuperObject(s32);
void func_001C5E80(s32, unk_func_00197D00_0 *);
void func_002D4F30(s32, s32);
s32 func_00197E90(s32);
u8 func_00197E40(s32);
void func_00197950(s32, s32);
void func_00197DF0(s32, s32);
void func_00197900(s32, s32);
extern s32 D_0035F538;

void func_00197D00(unk_func_00197D00_0 *arg0) {
    func_001C5E80(fn_h_StandardGameGetSuperObject(arg0->unk_04), arg0);
    func_002D4F30(fn_h_StandardGameGetSuperObject(arg0->unk_04), D_0035F538);
    if (func_00197E90(arg0->unk_04) == 0 && func_00197E40(arg0->unk_04) == 1) {
        func_00197950(arg0->unk_04, 0);
        func_00197DF0(arg0->unk_04, 0);
        func_00197900(arg0->unk_04, 0);
    }
}
