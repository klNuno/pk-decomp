/* profile: o0 */
#include "common.h"

f32 func_00250DB0(void *);

void func_00251FE0(u8 *arg0) {
    f32 temp;

    temp = func_00250DB0(arg0);
    if (*(f32 *)(arg0 + 0x24C) > temp) {
        *(f32 *)(arg0 + 0x24C) = temp;
    }
}
