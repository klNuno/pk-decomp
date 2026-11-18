/* profile: o0_301 */
#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    u32 unk_08;
    u8 unk_0C;
} unk_func_001E8890_0;

typedef struct {
    unk_func_001E8890_0 *unk_00;
    unk_func_001E8890_0 *unk_04;
    unk_func_001E8890_0 *unk_08;
} unk_func_001E8890_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08, unk_0C;
    u8 pad_10[4];
    s32 unk_14;
} unk_func_001E8890_2;

typedef struct {
    s32 *unk_00;
    void *unk_04;
    void *unk_08;
} unk_func_001E8890_3;

typedef struct {
    unk_func_001E8890_1 *unk_00;
    unk_func_001E8890_2 *unk_04, *unk_08;
    unk_func_001E8890_3 *unk_0C;
    u8 pad_10[4];
    u8 unk_14[1];
} unk_func_001E8890_4;

void *func_001E8520(void **, u32);
unk_func_001E8890_3 *func_001E8590(void **, unk_func_001E8890_0 **, u32);
unk_func_001E8890_2 *func_001E87E0(void **, unk_func_001E8890_0 **, u8);
void *memcpy(void *, const void *, u32);

void func_001E8890(unk_func_001E8890_4 *arg0, unk_func_001E8890_4 *arg1) {
    unk_func_001E8890_4 *temp;
    unk_func_001E8890_2 *temp1;
    unk_func_001E8890_0 **temp2;
    unk_func_001E8890_1 *temp3;
    void *sp5C;

    if (arg0 != NULL && arg1 != NULL) {
        temp = arg1;
        temp2 = NULL;
        temp1 = NULL;
        sp5C = arg1->unk_14;
        temp3 = arg0->unk_00;
        temp->unk_00 = temp3;
        temp2 = &temp3->unk_00;
        if (*temp2 != NULL) {
            temp->unk_04 = func_001E87E0(&sp5C, temp2, (*temp2)->unk_0C);
            temp1 = arg0->unk_04;
            if (temp1 != NULL) {
                temp->unk_04->unk_14 = temp1->unk_14;
            }
        } else {
            temp->unk_04 = NULL;
        }
        temp1 = arg0->unk_04;
        if (temp1 != NULL) {
            temp->unk_04->unk_14 = temp1->unk_14;
        }
        temp2 = &temp3->unk_04;
        if (*temp2 != NULL) {
            temp->unk_08 = func_001E87E0(&sp5C, temp2, (*temp2)->unk_0C);
            temp1 = arg0->unk_08;
            if (temp1 != NULL) {
                temp->unk_08->unk_14 = temp1->unk_14;
            }
        } else {
            temp->unk_08 = NULL;
        }
        temp->unk_0C = NULL;
        if (temp->unk_00->unk_08 != NULL && temp->unk_00->unk_08->unk_08 != 0) {
            temp->unk_0C = func_001E8590(&sp5C, &temp->unk_00->unk_08, temp->unk_00->unk_08->unk_08);
            *temp->unk_0C->unk_00 = *arg0->unk_0C->unk_00;
            if (arg0->unk_0C->unk_04 != NULL) {
                temp->unk_0C->unk_04 = func_001E8520(&sp5C, temp->unk_00->unk_08->unk_08);
                memcpy((void *)temp->unk_0C->unk_04, arg0->unk_0C->unk_04, temp->unk_00->unk_08->unk_08);
            }
        }
        temp1 = temp->unk_04;
        if (temp1 != NULL) {
            temp1->unk_08 = temp1->unk_14;
            temp1->unk_0C = temp1->unk_08;
        }
        temp1 = temp->unk_08;
        if (temp1 != NULL) {
            temp1->unk_08 = temp1->unk_14;
            temp1->unk_0C = temp1->unk_08;
        }
        if (temp->unk_0C != NULL) {
            if (temp->unk_0C->unk_04 == NULL) {
                memcpy((void *)temp->unk_0C->unk_08, temp->unk_00->unk_08->unk_00, temp->unk_00->unk_08->unk_08);
            } else {
                memcpy((void *)temp->unk_0C->unk_08, temp->unk_0C->unk_04, temp->unk_00->unk_08->unk_08);
            }
        }
    }
}
