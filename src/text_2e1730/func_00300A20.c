#include "common.h"

extern u8 D_0035EC60[];
extern u8 D_0035C728[];
void func_00302AD0();
void func_002F52C0();

void **func_00300A20(void **arg0) {
    void **volatile temp = arg0;

    func_00302AD0(temp);
    *temp = D_0035EC60;
    func_002F52C0(temp + 2, D_0035C728);
    return temp;
}
