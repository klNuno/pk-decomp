/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00197EE0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00197EE0_0;

s32 fn_h_StandardGameGetSuperObject();
void func_001C5E80();
s32 func_00197E90();
void func_00197DF0();
u8 func_00198020();
void func_00197950();
void func_00197250();
void func_00197900();
void func_002D4F30();
extern s32 D_0035F538;

void func_00197EE0(unk_func_00197EE0_0 *arg0) {
    func_001C5E80(fn_h_StandardGameGetSuperObject(arg0->unk_04), arg0);
    if (func_00197E90(arg0->unk_04) == 0) {
        func_00197DF0(arg0->unk_04, 1);
        if (func_00198020(arg0->unk_04) == 5) {
            func_00197950(arg0->unk_04, 0);
        } else {
            func_00197950(arg0->unk_04, 1);
        }
        if (func_00198020(arg0->unk_04) == 1) {
            func_00197250(arg0, 4);
        } else {
            func_00197900(arg0->unk_04, 0);
        }
    }
    func_002D4F30(fn_h_StandardGameGetSuperObject(arg0->unk_04), D_0035F538);
}
