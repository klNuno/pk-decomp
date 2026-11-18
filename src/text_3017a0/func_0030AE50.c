/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0030AE50_0 {
    struct unk_func_0030AE50_0 *unk_00;
} unk_func_0030AE50_0;

void func_0030B850();
void func_0031A170();
void func_0031A130();
void func_002D2BB0();
void func_0031A330();
void func_00308C80();
extern s32 D_003607FC;
extern unk_func_0030AE50_0 *D_00360800;
extern s32 D_00360804;
extern s32 D_00360808;

void func_0030AE50(void) {
    unk_func_0030AE50_0 *p;

    func_0030B850();
    func_0031A170(D_00360808);
    func_0031A130(D_00360808);
    if (D_00360800 != NULL) {
        while ((p = D_00360800) != NULL) {
            D_00360800 = p->unk_00;
            func_002D2BB0(p);
        }
    }
    func_0031A330(D_00360804);
    func_00308C80(D_003607FC);
}
