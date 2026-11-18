/* profile: opt_300 */
#include "common.h"

void *func_002D2BC0(s32);
void func_002E71E0(void *);
void func_002EA780();
void func_002EB670(void *);
void func_002EEA50(void *);
void func_002F6FC0(void *);
void func_002F7AB0(void *);
void func_002FE280();

s32 func_002F22A0(u8 *arg0) {
    void *p;

    if (*arg0 == 0) {
        return 1;
    }
    p = func_002D2BC0(0x11C);
    if (p != NULL) {
        func_002E71E0(p);
    }
    p = func_002D2BC0(0x48);
    if (p != NULL) {
        func_002EEA50(p);
    }
    p = func_002D2BC0(0x30);
    if (p != NULL) {
        func_002EB670(p);
    }
    func_002EA780();
    func_002FE280();
    p = func_002D2BC0(0x30);
    if (p != NULL) {
        func_002F6FC0(p);
    }
    p = func_002D2BC0(0x58);
    if (p != NULL) {
        func_002F7AB0(p);
    }
    return 1;
}
