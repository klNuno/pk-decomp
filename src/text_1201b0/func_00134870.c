#include "common.h"

typedef struct unk_func_00134870_0 {
    u8 pad_00[0xA8];
} unk_func_00134870_0;

extern unk_func_00134870_0 D_00365030[];
void func_00135210();

void func_00134870(s16 arg0) {
    func_00135210(&D_00365030[arg0]);
}
