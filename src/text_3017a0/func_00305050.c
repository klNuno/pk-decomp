/* profile: opt_300 */
#include "common.h"

typedef void (*unk_func_00305050_0)(void);

void func_00305050(unk_func_00305050_0 *arg0, unk_func_00305050_0 *arg1) {
    unk_func_00305050_0 *p;

    for (p = arg0; p < arg1; p++) {
        (*p)();
    }
}
