#include "common.h"

typedef struct unk_func_00136DE0_0 {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[6];
} unk_func_00136DE0_0;

void func_00136F20();
void func_00136830();
void func_001339C0(void *);
void func_00119548(s32);
void func_00133980(void *);
extern unk_func_00136DE0_0 *D_0035F928;
extern u8 D_0035F914;
extern char D_00347940[];
extern u8 D_00367100[];

void func_00136DE0(s32 arg0, s32 arg1) {
    if (D_0035F928[(u8)arg1].unk_01 != 0xFF) {
        func_00136F20(arg0, arg1);
        return;
    }
    if (D_0035F914 == 0xFF) {
        func_00136830(0x11, D_00347940, arg1);
    }
    func_001339C0(D_00367100);
    func_00119548(arg0 - 0x10);
    func_00133980(D_00367100);
}
