#include "common.h"

void func_002D09D0(s8 *arg0) {
    s8 c;

    while ((c = *arg0) != 0) {
        if (c >= 'a' && c <= 'z') {
            *arg0 -= 0x20;
        }
        arg0++;
    }
}
