/* profile: opt */
#include "common.h"

void c4sdk_malloc(void *, s32);
void func_002D2BB0(void *);
void func_002E9550(void *, s32);
void func_002F1730(void *, s32);

void *func_002F2490(u8 *arg0, s32 arg1) {
    void *p;

    if (arg0 != NULL) {
        p = arg0 + 0x30;
        if (p != NULL) {
            c4sdk_malloc(p, 0);
        }
        p = arg0 + 0x20;
        if (p != NULL) {
            if (p != NULL) {
                if (p != NULL) {
                    func_002F1730(p, -1);
                }
            }
        }
        p = arg0 + 0x10;
        if (p != NULL) {
            if (p != NULL) {
                if (p != NULL) {
                    func_002F1730(p, -1);
                }
            }
        }
        if (arg0 != NULL) {
            if (arg0 != NULL) {
                if (arg0 != NULL) {
                    func_002E9550(arg0, -1);
                }
            }
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
