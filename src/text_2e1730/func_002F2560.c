#include "common.h"

void c4sdk_malloc(void *, s16);
void func_002E95B0(void *, s16);
void func_002E8F90(void *, s16);
void func_00304B00(void *);

static inline void func_002F2560_m(u8 *p) {
    if (p != NULL) {
        func_002E95B0(p, 0);
    }
}

static inline void func_002F2560_b(u8 *p) {
    if (p != NULL) {
        if (p + 0x30 != NULL) {
            c4sdk_malloc(p + 0x30, 0);
        }
        if (p + 0x20 != NULL) {
            func_002F2560_m(p + 0x20);
        }
        if (p + 0x10 != NULL) {
            func_002F2560_m(p + 0x10);
        }
        if (p != NULL) {
            if (p != NULL) {
                func_002E8F90(p, 0);
            }
        }
    }
}

u8 *func_002F2560(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_002F2560_b(arg0 + 4);
        if (arg0 != NULL) {
            c4sdk_malloc(arg0, 0);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
