#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[8];
    u8 unk_0C;
} unk_func_002F3F00_0;

extern u8 D_0035E800[];
void func_002F4EB0();
s32 func_00303380();
void func_00303340(s32, unk_func_002F3F00_0 *);

unk_func_002F3F00_0 *func_002F3F00(unk_func_002F3F00_0 *arg0) {
    unk_func_002F3F00_0 *volatile temp = arg0;

    func_002F4EB0(temp);
    temp->unk_00 = D_0035E800;
    temp->unk_0C = 0;
    func_00303340(func_00303380(), temp);
    return temp;
}
