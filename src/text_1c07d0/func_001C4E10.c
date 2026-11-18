/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x60];
} unk_func_001C4E10_0;

void func_00155C70(unk_func_001C4E10_0 *);
extern unk_func_001C4E10_0 *D_0035FFEC;

void func_001C4E10(void) {
    u32 i;

    for (i = 0; i < 1025L; i++) {
        func_00155C70(&D_0035FFEC[i]);
    }
}
