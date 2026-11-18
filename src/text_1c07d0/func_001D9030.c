/* profile: o0 */
#include "common.h"

typedef struct unk_func_001D9030_0 {
    u8 unk_00;
    u8 pad_01[4];
    u8 unk_05;
    u8 pad_06[2];
} unk_func_001D9030_0;

s32 func_0010D308(unk_func_001D9030_0 *);
void func_0011B418(char *);
void func_00284C10(unk_func_001D9030_0 *);
extern char D_0034C0B0[];
extern char D_0034C0C8[];

u8 func_001D9030(void) {
    u8 var_s0 = 0;
    unk_func_001D9030_0 sp28;

    if (func_0010D308(&sp28) == 0) {
        func_0011B418(D_0034C0B0);
        return 0;
    }
    if (sp28.unk_00 != 0) {
        func_0011B418(D_0034C0C8);
        return 0;
    }
    func_00284C10(&sp28);
    var_s0 = sp28.unk_05;
    return var_s0;
}
