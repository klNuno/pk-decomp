/* profile: o1 */
#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
} unk_func_0019DAB0_0;

void func_0012A4F0();
void func_0012A640();
extern s16 D_005AB7FC[];
extern s32 D_005AB800[];
extern s32 D_005AB84C[];
extern s64 D_005AB858[];
extern s64 D_005AB868[];

void func_0019DAB0(void) {
    *(unk_func_0019DAB0_0 *)D_005AB858 = *(unk_func_0019DAB0_0 *)D_005AB868;
    D_005AB800[0] = D_005AB84C[0];
    func_0012A4F0(D_005AB7FC[0], D_005AB858);
    func_0012A640(D_005AB7FC[0]);
}
