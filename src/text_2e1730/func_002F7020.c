#include "common.h"

typedef struct unk_func_002F7020_0 {
    s32 *unk_00;
    u8 pad_04[0x24];
    void *unk_28;
} unk_func_002F7020_0;

void *func_002D2BC0();
void func_002FAC00();
void *func_002F6B70();
extern s32 D_0035E870[];

unk_func_002F7020_0 *func_002F7020(void) {
    unk_func_002F7020_0 *p;
    void *temp2;

    p = func_002D2BC0(0x30);
    if (p != NULL) {
        unk_func_002F7020_0 *volatile temp = p;

        func_002FAC00(p);
        temp->unk_00 = D_0035E870;
        temp2 = func_002D2BC0(0x40);
        if (temp2 != NULL) {
            temp2 = func_002F6B70(temp2);
        }
        temp->unk_28 = temp2;
        p = temp;
    }
    return p;
}
