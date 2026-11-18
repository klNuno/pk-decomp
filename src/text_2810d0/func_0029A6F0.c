#include "common.h"

void func_0029A940(void *);
void func_0029B950(void *);
void **func_0029DFA0();

void func_0029A6F0(void) {
    void *temp_a0;

    temp_a0 = *func_0029DFA0();
    if ((*(s32 *)((u8 *)temp_a0 + 0x14)) != 0) {
        func_0029A940(temp_a0);
        return;
    }
    func_0029B950(temp_a0);
}
