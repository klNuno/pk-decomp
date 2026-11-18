/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x106];
    s16 unk_106;
    u8 pad_108[0x24C];
    s16 unk_354;
} unk_func_001AA190_0;

extern s16 D_005AB790[];
extern s16 D_005AB894[];

void func_001694B0(s16, s16, void *);
void func_00169790(s16, s16, void *);
void func_0016DD90(s16, s16, s32 *);
void func_0016ED40(s16, s16, s32);

void func_001AA190(u8 arg0, u8 arg1, u8 arg2) {
    s32 temp3;
    s32 temp4;
    u8 temp1[0x70];
    u8 temp2[0x70];

    if (arg0 == 1) {
        func_0016DD90(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg1])->unk_106, &temp3);
        func_0016DD90(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg2])->unk_106, &temp4);
    } else {
        func_0016DD90(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg1])->unk_354, &temp3);
        func_0016DD90(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg2])->unk_354, &temp4);
    }

    if (temp3 != 0 && temp4 != 0) {
        if (arg0 == 1) {
            func_00169790(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg1])->unk_106, temp1);
            func_00169790(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg2])->unk_106, temp2);
            func_001694B0(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg1])->unk_106, temp2);
            func_0016ED40(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg1])->unk_106, temp3);
            func_001694B0(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg2])->unk_106, temp1);
            func_0016ED40(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg2])->unk_106, temp4);
        } else {
            func_00169790(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg1])->unk_354, temp1);
            func_00169790(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg2])->unk_354, temp2);
            func_001694B0(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg1])->unk_354, temp2);
            func_0016ED40(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg1])->unk_354, temp3);
            func_001694B0(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg2])->unk_354, temp1);
            func_0016ED40(D_005AB894[0], ((unk_func_001AA190_0 *)&D_005AB790[arg2])->unk_354, temp4);
        }
    }
}
