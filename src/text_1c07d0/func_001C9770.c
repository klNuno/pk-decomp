/* profile: o0_301_p */
#include "common.h"

typedef struct {
    void *unk_00;
} unk_001C9770_0;

typedef struct {
    u8 pad_00[0x5E];
    u8 unk_5E;
} unk_001C9770_1;

typedef struct {
    u8 *unk_00;
    u8 pad_04[2];
    u16 unk_06;
    u8 pad_08[4];
} unk_001C9770_2;

unk_001C9770_0 *HIE_fn_hGetSuperObjectObject(void *);
void *func_00197860(void *);
s32 func_001A7060(void *);
unk_001C9770_1 *func_001ABA70(void *);
s8 func_001ABB40(void *);
s32 func_001C03C0(void *);
void func_001C46C0(void *, s32, u8);
void func_001C9BF0(void *, s8);
void func_001C9C30(void *, s32, s8);
u8 func_001C9C90(void *, s32);
u8 func_001C9CC0(void *);
void func_001CA0A0(unk_001C9770_2 *, s32, void *);
u8 func_001CA430(u8 **);
unk_001C9770_2 *func_001CBDA0(unk_001C9770_1 *, s32, s32);

void func_001C9770(void *arg0) {
    void *temp0;
    unk_001C9770_2 *temp1;
    unk_001C9770_1 *temp2;
    void *temp3;

    temp0 = HIE_fn_hGetSuperObjectObject(arg0)->unk_00;
    temp3 = func_00197860(temp0);
    if (temp3 == NULL) {
        return;
    }
    temp2 = func_001ABA70(temp3);
    temp1 = func_001CBDA0(temp2, func_001C03C0(temp0) & 0xFFFF, func_001A7060(temp0));
    if (temp1 != NULL) {
        if ((s8)func_001ABB40(temp3) > 0) {
            while ((u8)temp2->unk_5E != (u8)func_001C9CC0(temp0) &&
                   (u16)temp1[(u8)func_001C9CC0(temp0)].unk_06 <= (func_001C03C0(temp0) & 0xFFFF)) {
                if ((u8)func_001C9C90(temp0, (u8)func_001C9CC0(temp0)) == 0) {
                    func_001CA0A0(&temp1[(u8)func_001C9CC0(temp0)], 0, arg0);
                    func_001C46C0(temp0, (u8)func_001C9CC0(temp0),
                                  func_001CA430(&temp1[(u8)func_001C9CC0(temp0)].unk_00));
                } else if ((u8)func_001C9C90(temp0, (u8)func_001C9CC0(temp0)) != 0xFF) {
                    func_001C9C30(temp0, (u8)func_001C9CC0(temp0), -1);
                }
                func_001C9BF0(temp0, 1);
            }
        } else {
            while ((u8)func_001C9CC0(temp0) != 0xFF &&
                   (u16)temp1[(u8)func_001C9CC0(temp0)].unk_06 >= (func_001C03C0(temp0) & 0xFFFF)) {
                if ((u8)func_001C9C90(temp0, (u8)func_001C9CC0(temp0)) == 0) {
                    func_001CA0A0(&temp1[(u8)func_001C9CC0(temp0)], 1, arg0);
                    func_001C46C0(temp0, (u8)func_001C9CC0(temp0),
                                  func_001CA430(&temp1[(u8)func_001C9CC0(temp0)].unk_00));
                } else if ((u8)func_001C9C90(temp0, (u8)func_001C9CC0(temp0)) != 0xFF) {
                    func_001C9C30(temp0, (u8)func_001C9CC0(temp0), -1);
                }
                func_001C9BF0(temp0, -1);
            }
        }
    }
}
