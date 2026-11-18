#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[0x37];
    u8 unk_40;
} unk_func_003139D0_1;

typedef struct {
    u8 pad_00[0x1C];
    unk_func_003139D0_1 *unk_1C;
} unk_func_003139D0_0;

extern unk_func_003139D0_0 *D_003608AC;
void func_003122F0(unk_func_003139D0_1 *, u8 *);

void func_003139D0(void) {
    unk_func_003139D0_1 *temp;
    u8 *p;

    if (D_003608AC != NULL) {
        temp = D_003608AC->unk_1C;
        if (temp != NULL && temp->unk_08 != 0) {
            p = &temp->unk_40;
            func_003122F0(temp, p);
            temp->unk_08 = 0;
            *p = 0;
        }
    }
}
