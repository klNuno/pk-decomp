/* profile: o0 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[5];
    u8 unk_06;
    u8 pad_07;
} unk_func_001D8F90_0;

s32 func_0010D308(unk_func_001D8F90_0 *);
void func_0011B418(char *);
void func_00284C10(unk_func_001D8F90_0 *);
extern char D_0034C0B0[];
extern char D_0034C0C8[];

u8 func_001D8F90(void) {
    u8 ret = 0;
    unk_func_001D8F90_0 sp28;

    if (func_0010D308(&sp28) == 0) {
        func_0011B418(D_0034C0B0);
        return 0;
    }
    if (sp28.unk_00 != 0) {
        func_0011B418(D_0034C0C8);
        return 0;
    }
    func_00284C10(&sp28);
    ret = sp28.unk_06;
    return ret;
}
