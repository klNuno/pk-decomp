/* profile: o0_p */
#include "common.h"

typedef struct unk_func_0019CB80_0 unk_func_0019CB80_0;
typedef struct unk_func_0019CB80_1 unk_func_0019CB80_1;

struct unk_func_0019CB80_0 {
    unk_func_0019CB80_0 *unk_00;
    unk_func_0019CB80_0 *unk_04;
    unk_func_0019CB80_1 *unk_08;
    u16 unk_0C;
    s16 unk_0E;
};

struct unk_func_0019CB80_1 {
    unk_func_0019CB80_0 *unk_00;
    unk_func_0019CB80_0 *unk_04;
    s32 unk_08;
};

unk_func_0019CB80_0 *func_0019C970(void);

#define UNK_FUNC_0019CB80(arg)                              \
    if ((arg)->unk_00 != NULL) {                            \
        (arg)->unk_00->unk_04 = (arg)->unk_04;              \
    }                                                      \
    if ((arg)->unk_04 != NULL) {                            \
        (arg)->unk_04->unk_00 = (arg)->unk_00;              \
    }                                                      \
    if ((arg)->unk_08 != NULL) {                            \
        (arg)->unk_08->unk_08--;                            \
        if ((arg)->unk_08->unk_00 == (arg)) {               \
            (arg)->unk_08->unk_00 = (arg)->unk_00;          \
        }                                                  \
        if ((arg)->unk_08->unk_04 == (arg)) {               \
            (arg)->unk_08->unk_04 = (arg)->unk_04;          \
        }                                                  \
    }                                                      \
    (arg)->unk_04 = (arg)->unk_00 = NULL;                   \
    (arg)->unk_08 = NULL

void func_0019CB80(unk_func_0019CB80_1 *arg0, u16 arg1, s16 arg2) {
    unk_func_0019CB80_0 *temp;
    unk_func_0019CB80_0 *temp2;
    unk_func_0019CB80_0 *temp3;
    u16 temp4;
    unk_func_0019CB80_0 *temp5;
    u16 temp6;

    if (arg0 != NULL) {
        temp6 = *(s16 *)&arg0->unk_08;
        (void)temp6;
        temp4 = 0;
        temp5 = temp2 = arg0->unk_00;
        (void)temp5;
        while (temp2 != NULL) {
            if ((u16)temp2->unk_0C == (u16)arg1) {
                temp2->unk_0E = arg2;
                break;
            }
            if ((u16)temp2->unk_0C > (u16)arg1) {
                break;
            }
            temp4++;
            temp3 = temp2 = temp2->unk_00;
            (void)temp3;
        }
        if (temp2 == NULL) {
            temp = func_0019C970();
            temp->unk_0C = arg1;
            temp->unk_0E = arg2;
            UNK_FUNC_0019CB80(temp);
            temp->unk_00 = NULL;
            temp->unk_04 = arg0->unk_04;
            temp->unk_08 = arg0;
            if (arg0->unk_00 == NULL) {
                arg0->unk_00 = temp;
            } else {
                arg0->unk_04->unk_00 = temp;
            }
            arg0->unk_04 = temp;
            arg0->unk_08++;
        } else if ((u16)temp2->unk_0C != (u16)arg1) {
            temp = func_0019C970();
            temp->unk_0C = arg1;
            temp->unk_0E = arg2;
            UNK_FUNC_0019CB80(temp);
            temp->unk_00 = temp2;
            temp->unk_04 = temp2->unk_04;
            if (temp2->unk_04 != NULL) {
                temp2->unk_04->unk_00 = temp;
                temp->unk_08 = temp2->unk_04->unk_08;
            } else {
                temp2->unk_08->unk_00 = temp;
            }
            if (temp2 != NULL) {
                temp2->unk_04 = temp;
                temp->unk_08 = temp2->unk_08;
            } else {
                temp2->unk_04->unk_08->unk_04 = temp;
            }
            temp->unk_08->unk_08++;
        }
    }
}
