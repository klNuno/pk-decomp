/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B5370_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001B5370_0;

unk_func_001B5370_0 *func_001B51F0();
unk_func_001B5370_0 *func_001B5270();
unk_func_001B5370_0 *func_001B52F0();

void func_001B5370(s32 arg0, unk_func_001B5370_0 *arg1, unk_func_001B5370_0 *arg2, unk_func_001B5370_0 *arg3) {
    arg1->unk_00 = func_001B51F0(arg0)->unk_00;
    arg1->unk_04 = func_001B51F0(arg0)->unk_04;
    arg1->unk_08 = func_001B51F0(arg0)->unk_08;
    arg2->unk_00 = func_001B5270(arg0)->unk_00;
    arg2->unk_04 = func_001B5270(arg0)->unk_04;
    arg2->unk_08 = func_001B5270(arg0)->unk_08;
    arg3->unk_00 = func_001B52F0(arg0)->unk_00;
    arg3->unk_04 = func_001B52F0(arg0)->unk_04;
    arg3->unk_08 = func_001B52F0(arg0)->unk_08;
}
