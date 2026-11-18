#include "common.h"

void func_003021D0();

void func_002DDE80(void *arg0, s8 arg1) {
    (*(s8 *)((u8 *)arg0 + 0x18)) = arg1;
    func_003021D0();
}
