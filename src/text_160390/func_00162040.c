#include "common.h"

void func_00162130();

s32 func_00162040(s32 *arg0) {
    s32 ok;

    ok = arg0 != (s32 *)0xCDCDCDCD && arg0 != NULL;
    if (!ok) {
        func_00162130();
    }
    return *arg0;
}
