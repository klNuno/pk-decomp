/* profile: o0_301_p */
#include "common.h"

typedef struct {
    void *unk_00;
} unk_func_001C9CE0_0;

typedef struct {
    u8 pad_00[0x5E];
    u8 unk_5E;
} unk_func_001C9CE0_1;

typedef struct {
    u8 pad_00[0xC];
} unk_func_001C9CE0_2;

unk_func_001C9CE0_0 *HIE_fn_hGetSuperObjectObject(void *);
void *func_00197860(void *);
s32 func_001A7060(void *);
unk_func_001C9CE0_1 *func_001ABA70(void *);
s8 func_001ABB40(void *);
s32 func_001C03C0(void *);
void func_001C46C0(void *, s32, u8);
void func_001C91D0(void *, u8);
void func_001C9C30(void *, s32, s8);
u8 func_001C9C90(void *, s32);
u8 func_001C9CC0(void *);
void func_001CA0A0(unk_func_001C9CE0_2 *, s32, void *);
u8 func_001CA430(unk_func_001C9CE0_2 *);
unk_func_001C9CE0_2 *func_001CBDA0(unk_func_001C9CE0_1 *, s32, s32);

void func_001C9CE0(void *arg0) {
    s8 temp;
    void *temp2;
    unk_func_001C9CE0_2 *temp3;
    unk_func_001C9CE0_1 *temp4;
    void *temp5;
    s32 temp6;

    temp2 = HIE_fn_hGetSuperObjectObject(arg0)->unk_00;
    temp5 = func_00197860(temp2);
    if (temp5 != NULL) {
        temp4 = func_001ABA70(temp5);
        temp6 = (func_001C03C0(temp2) & 0xFFFF) - 1;
        temp3 = func_001CBDA0(temp4, temp6, func_001A7060(temp2));
        if (temp3 != NULL) {
            if ((s8)func_001ABB40(temp5) > 0) {
                for (temp = (s8)func_001C9CC0(temp2); (s8)temp < (u8)temp4->unk_5E; temp++) {
                    if ((u8)func_001C9C90(temp2, (s8)temp) == 0) {
                        func_001CA0A0(&temp3[(s8)temp], 0, arg0);
                        func_001C46C0(temp2, (s8)temp, func_001CA430(&temp3[(s8)temp]));
                    } else if ((u8)func_001C9C90(temp2, (s8)temp) != 0xFF) {
                        func_001C9C30(temp2, (s8)temp, -1);
                    }
                }
                func_001C91D0(temp2, 0);
            } else {
                if ((u8)func_001C9CC0(temp2) != 0xFF) {
                    for (temp = (s8)func_001C9CC0(temp2); (s8)temp >= 0; temp--) {
                        if ((u8)func_001C9C90(temp2, (s8)temp) == 0) {
                            func_001CA0A0(&temp3[(s8)temp], 1, arg0);
                            func_001C46C0(temp2, (s8)temp, func_001CA430(&temp3[(s8)temp]));
                        } else if ((u8)func_001C9C90(temp2, (s8)temp) != 0xFF) {
                            func_001C9C30(temp2, (s8)temp, -1);
                        }
                    }
                }
                func_001C91D0(temp2, (u8)((u8)temp4->unk_5E - 1));
            }
        }
    }
}
