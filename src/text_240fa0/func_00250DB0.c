/* profile: o0 */
#include "common.h"

f32 func_00250DB0(void *arg0) {
    f32 spC;
    if ((*(f32 *)((u8 *)arg0 + 0x238)) < (*(f32 *)((u8 *)arg0 + 0x228))) {
        spC = 4.5f + ((((*(f32 *)((u8 *)arg0 + 0x248)) - 4.5f) * ((*(f32 *)((u8 *)arg0 + 0x238)) - (*(f32 *)((u8 *)arg0 + 0x22C)))) / ((*(f32 *)((u8 *)arg0 + 0x228)) - (*(f32 *)((u8 *)arg0 + 0x22C))));
    } else {
        spC = 2.0f + ((((*(f32 *)((u8 *)arg0 + 0x248)) - 2.0f) * ((*(f32 *)((u8 *)arg0 + 0x238)) - (*(f32 *)((u8 *)arg0 + 0x230)))) / ((*(f32 *)((u8 *)arg0 + 0x228)) - (*(f32 *)((u8 *)arg0 + 0x230))));
    }
    if (!(spC <= (*(f32 *)((u8 *)arg0 + 0x248)))) {
        return *(f32 *)((u8 *)arg0 + 0x248);
    }
    return spC;
}
