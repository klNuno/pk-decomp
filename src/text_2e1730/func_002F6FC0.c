#include "common.h"

typedef struct unk_func_002F6FC0_0 {
    void *unk_00;
    u8 pad_04[0x24];
    void *unk_28;
} unk_func_002F6FC0_0;

void func_002FAC00(unk_func_002F6FC0_0 *);
void *func_002D2BC0(s32);
void *func_002F6B70(void *);
extern u8 D_0035E870[];

unk_func_002F6FC0_0 *func_002F6FC0(unk_func_002F6FC0_0 *volatile arg0) {
    void *temp;

    func_002FAC00(arg0);
    arg0->unk_00 = D_0035E870;
    temp = func_002D2BC0(0x40);
    if (temp != NULL) {
        temp = func_002F6B70(temp);
    }
    arg0->unk_28 = temp;
    return arg0;
}
