/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    void **unk_0C;
    s32 unk_10;
    u8 pad_14[0x168];
    s32 unk_17C;
    s32 unk_180;
} unk_00176110_0;

typedef struct unk_00176110_1 {
    s32 unk_00;
    unk_00176110_0 *unk_04;
    struct unk_00176110_1 *unk_08;
    u8 pad_0C[8];
    struct unk_00176110_1 *unk_14;
} unk_00176110_1;

typedef struct {
    u8 pad_00[0x1CC];
    s32 unk_1CC;
} unk_00176110_2;

extern unk_00176110_2 *D_0035FB04;
extern s32 D_0035FC54;
extern s32 D_0035FC58;
extern s32 D_0035FC6C;
extern s32 D_0035FC70;
extern s32 D_0035FC74;
extern s32 D_0035FC78;
extern s32 D_0035FC7C;
extern s32 D_0035FC80;

void func_0012D980(void);
void func_0012C4B0(void);
s32 func_0018ED60(void);
void func_0018EC10(s32);
void func_00285C80(s32);
u16 func_00165650(void *);
void func_00165750(void *, f32 *);
f32 func_001655C0(void *);
f32 func_001655F0(void *);
f32 func_001655B0(void *);
f32 func_001655E0(void *);
f32 func_001655D0(void *);
void func_00164C30(f32 *, f32, f32, f32, f32, f32);
void func_00175FD0(unk_00176110_1 *);
void func_0018EC00(s32);
void func_0018EB50(s32, s32);
void func_0018ECD0(s32 *);
void func_0018EBF0(s32);

void func_00176110(unk_00176110_1 *arg0) {
    unk_00176110_1 *temp;
    unk_00176110_1 *temp2;
    s32 *temp3;
    unk_00176110_0 *temp4;

    if (arg0 != 0) {
        func_0012D980();
        if (arg0->unk_00 == 4) {
            temp4 = arg0->unk_04;
            if (temp4 != 0) {
                temp3 = &temp4->unk_180;
                if (D_0035FC6C != 0) {
                    temp3 = &temp4->unk_17C;
                }
                D_0035FC74 = 0;
                D_0035FC54 = 0;
                *temp3 = func_0018ED60();
                func_0018EC10(*temp3);
                func_00285C80(0xB60);
                if (temp4 != 0) {
                    void *temp7;
                    void **temp5 = temp4->unk_0C;
                    s16 temp6;
                    for (temp6 = 0; temp6 < temp4->unk_10; temp6++, temp5++) {
                        temp7 = *temp5;
                        if (func_00165650(temp7) == 6) {
                            f32 temp8[4];
                            f32 temp12;
                            f32 temp11;
                            f32 temp10;
                            f32 temp9;
                            func_00165750(temp7, temp8);
                            D_0035FB04->unk_1CC = 1;
                            temp9 = func_001655C0(temp7);
                            temp10 = func_001655F0(temp7);
                            temp11 = func_001655B0(temp7);
                            temp12 = func_001655E0(temp7);
                            func_00164C30(temp8, temp9, temp10, temp11, temp12, func_001655D0(temp7));
                            D_0035FB04->unk_1CC = 1;
                            goto block_00;
                        }
                    }
                    D_0035FB04->unk_1CC = 0;
                }
block_00:
                D_0035FC7C = 0;
                D_0035FC80 = 0;
                func_00285C80(0xB50);
                D_0035FC78 = 1;
                if (D_0035FC6C != 0) {
                    D_0035FC70 = 0;
                    for (temp2 = arg0->unk_08; temp2 != 0; temp2 = temp2->unk_14) {
                        func_00175FD0(temp2);
                    }
                    D_0035FC70 = 1;
                    for (temp2 = arg0->unk_08; temp2 != 0; temp2 = temp2->unk_14) {
                        func_00175FD0(temp2);
                    }
                    D_0035FC70 = 0;
                } else {
                    for (D_0035FC58 = -10; D_0035FC58 <= 10; D_0035FC58++) {
                        for (temp2 = arg0->unk_08; temp2 != 0; temp2 = temp2->unk_14) {
                            func_00175FD0(temp2);
                        }
                    }
                }
                D_0035FC78 = 0;
                func_0018EC00(*temp3);
                func_0018EB50(*temp3, D_0035FC54);
                if (D_0035FC74 == 0) {
                    func_0018ECD0(temp3);
                } else {
                    func_0018EBF0(*temp3);
                    D_0035FC7C = 0;
                    D_0035FC80 = 0;
                }
            }
        } else {
            for (temp = arg0->unk_08; temp != 0; temp = temp->unk_14) {
                func_00176110(temp);
            }
        }
        func_0012C4B0();
    }
}
