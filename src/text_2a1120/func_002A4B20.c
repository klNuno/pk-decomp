/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
} unk_func_002A4B20_0;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A4B20_0 unk_08;
} unk_func_002A4B20_1;

unk_func_002A4B20_1 *func_0029DA50(s32);
void *memcpy(void *, const void *, u32);
void func_002A4C00();
void func_002A4CA0();

void func_002A4B20(s32 arg0, s32 arg1, f32 *arg2) {
    unk_func_002A4B20_1 *temp;
    unk_func_002A4B20_0 *temp3;
    f32 temp2;

    switch (arg1) {
    case 0x1200:
    case 0x1201:
    case 0x1202:
    case 0x1203:
    case 0x1204:
        temp = func_0029DA50(0x18);
        temp->unk_08.unk_00 = arg0;
        temp->unk_08.unk_04 = arg1;
        temp3 = &temp->unk_08;
        memcpy((void *)((u32)temp3 + 8), arg2, 0x10);
        temp->unk_00 = func_002A4C00;
        break;
    default:
        temp2 = *arg2;
        temp = func_0029DA50(0xC);
        temp->unk_08.unk_00 = arg0;
        temp->unk_08.unk_04 = arg1;
        temp->unk_08.unk_08 = temp2;
        temp->unk_00 = func_002A4CA0;
        break;
    }
}
