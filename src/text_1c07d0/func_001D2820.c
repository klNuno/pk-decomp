/* profile: o0 */
#include "common.h"

void func_0016CC10(void *);
extern s32 D_00360084;
extern s32 D_00360088;
extern s32 D_0036008C;
extern s32 D_00360090;
extern s32 D_00360094;
extern s32 D_00360098;
extern s32 D_0036009C;
extern s32 D_003600A0;

void func_001D2820(void *arg0) {
    D_003600A0 = *(s32 *)((u8 *)arg0 + 0x38);
    D_0036009C = *(s32 *)((u8 *)arg0 + 0x40);
    D_00360098 = *(s32 *)((u8 *)arg0 + 0x3C);
    D_00360094 = *(s32 *)((u8 *)arg0 + 0x44);
    (*(s32 *)((u8 *)arg0 + 0x38)) = (s32) D_00360084;
    (*(s32 *)((u8 *)arg0 + 0x40)) = (s32) D_00360088;
    (*(s32 *)((u8 *)arg0 + 0x3C)) = (s32) D_0036008C;
    (*(s32 *)((u8 *)arg0 + 0x44)) = (s32) D_00360090;
    func_0016CC10(arg0);
}
