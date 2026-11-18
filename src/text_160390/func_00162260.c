#include "common.h"

void func_00162220();
void func_001621C0();
void func_00162180();
void func_001620C0();
extern void *D_0035F9FC;
extern void *D_0035FA04;
extern void *D_0035FA00;

void func_00162260(void) {
    D_0035F9FC = func_00162220;
    D_0035FA04 = func_001621C0;
    D_0035FA00 = func_00162180;
    func_001620C0();
}
