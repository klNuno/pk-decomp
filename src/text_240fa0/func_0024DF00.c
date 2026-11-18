/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_0024DF00_0;

typedef struct {
    u8 pad_00[4];
    unk_func_0024DF00_0 *unk_04;
    unk_func_0024DF00_0 *unk_08;
    unk_func_0024DF00_0 *unk_0C;
} unk_func_0024DF00_1;

void func_001B4750();

void func_0024DF00(unk_func_0024DF00_1 *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk_04->unk_68;
    arg0->unk_04->unk_68 = arg1;
    arg0->unk_08->unk_68 = arg1;
    arg0->unk_0C->unk_68 = arg1;
    func_001B4750(arg0);
}
