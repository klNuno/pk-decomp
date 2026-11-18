/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0021D140_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0021D140_1;

void func_0021D1E0(unk_func_0021D140_1 *, s32, unk_func_0021D140_1 *);

void func_0021D140(unk_func_0021D140_1 *arg0, s32 arg1, unk_func_0021D140_1 *arg2) {
    unk_func_0021D140_1 sp10;

    if (arg2 == arg0) {
        ((unk_func_0021D140_0 *)&sp10)->unk_00 = ((unk_func_0021D140_0 *)arg2)->unk_00;
        ((unk_func_0021D140_0 *)&sp10)->unk_04 = ((unk_func_0021D140_0 *)arg2)->unk_04;
        ((unk_func_0021D140_0 *)&sp10)->unk_08 = ((unk_func_0021D140_0 *)arg2)->unk_08;
        func_0021D1E0(arg0, arg1, &sp10);
    } else {
        func_0021D1E0(arg0, arg1, arg2);
    }
}
