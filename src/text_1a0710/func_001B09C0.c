/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B09C0_0 {
    void *volatile unk_00;
    volatile s32 unk_04;
} unk_func_001B09C0_0;

void func_0011B518();
s32 func_001B0980();

void func_001B09C0(unk_func_001B09C0_0 *arg0) {
    func_0011B518(arg0->unk_00, arg0->unk_04, 8, func_001B0980);
}
