/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001B2F70_0 {
    u16 *unk_00;
    s32 unk_04;
} unk_func_001B2F70_0;

unk_func_001B2F70_0 *func_001B0610(u8, s32);
u16 func_001B0AE0(u16 *);
s32 func_001B0B00(u8, u16, s32);
s32 func_001B3350(u8, s32, s16);
u8 func_001B33C0(u8, s32);
s32 func_001B3430(u8, s32);
void func_001DC850(s32, s32 *, s16);

s32 func_001B2F70(u8 arg0, s32 arg1, s32 arg2)
{
    s16 i;
    u16 *temp;
    s32 value;
    s16 count;
    u16 index;
    s32 flag;
    unk_func_001B2F70_0 *a;
    u16 *next;
    s32 values[10];
    volatile s16 zero;

    count = 0;
    value = 0;
    a = func_001B0610(arg0, arg1);
    if (func_001B33C0(arg0, arg1)) {
        if (a != 0) {
            temp = a->unk_00;
            zero = i = 0;
            while ((s16)i < a->unk_04) {
                value = func_001B0B00(arg0, func_001B0AE0(temp), arg1);
                if (value != 0 && (s16)count < 10) {
                    values[count++] = value;
                }
                i++;
                next = ++temp;
                (void)next;
                (void)temp;
            }
        }
    } else {
        i = 0;
        temp = (a != 0) ? a->unk_00 : 0;
        index = ((temp == 0) ? -1 : (s32)(u16)func_001B0AE0(temp));
        while ((s16)i < func_001B3430(arg0, arg1)) {
            flag = func_001B3350(arg0, arg1, i) & 0xFF;
            if ((flag & 0xFF) == 1 || ((flag & 0xFF) == 0 && (u16)index == (s16)i)) {
                value = func_001B0B00(arg0, (u16)i, arg1);
                if (value != 0 && (s16)count < 10) {
                    values[count++] = value;
                }
            }
            i++;
            if (temp != 0 && (u16)index < (s16)i) {
                temp++;
                (void)temp;
                index = (u16)((temp == 0) ? -1 : (s32)(u16)func_001B0AE0(temp));
            }
        }
    }
    func_001DC850(arg2, values, count);
    return arg2;
}
