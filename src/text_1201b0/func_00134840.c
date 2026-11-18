#include "common.h"

typedef struct unk_func_00134840_0 {
    u8 pad_00[0xA8];
} unk_func_00134840_0;

void func_00134F90();
extern unk_func_00134840_0 D_00365030[];

void func_00134840(s16 arg0) {
    func_00134F90(&D_00365030[arg0]);
}
