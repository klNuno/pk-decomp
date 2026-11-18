/* profile: o0 */
#include "common.h"

void func_0016C9C0();
extern s32 D_00360094;
extern s32 D_00360098;
extern s32 D_0036009C;
extern s32 D_003600A0;

void func_001D28B0(void *arg0) {
    (*(s32 *)((u8 *)arg0 + 0x38)) = (s32) D_003600A0;
    (*(s32 *)((u8 *)arg0 + 0x40)) = (s32) D_0036009C;
    (*(s32 *)((u8 *)arg0 + 0x3C)) = (s32) D_00360098;
    (*(s32 *)((u8 *)arg0 + 0x44)) = (s32) D_00360094;
    func_0016C9C0();
}
