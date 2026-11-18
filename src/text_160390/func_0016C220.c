#include "common.h"

extern s32 D_0035FB88;
extern s32 D_0035FB8C;
extern s32 D_0035FB94;
extern s32 D_0035FBA0;
extern s32 D_0035FBA4;
extern s32 D_0035FC88;
extern s32 D_0035FC8C;
extern s32 D_0035FD3C;
extern s16 D_007B2438[];
void func_00189390();
void func_0018ACE0();
void func_0018D910();
void func_001925A0();

void func_0016C220(void) {
    func_0018D910();
    D_0035FB88 = 0;
    D_0035FB8C = 0;
    func_0018ACE0();
    D_0035FB94 = 0;
    D_0035FC88 = 0;
    D_0035FD3C = 0;
    D_007B2438[0] = 0;
    func_001925A0();
    D_0035FBA4 = 0;
    D_0035FBA0 = 0;
    func_00189390();
    D_0035FC8C ^= 1;
}
