/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 *unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0C;
} unk_func_002D8D10_0;

void func_00308BE0();
void func_00308B80();
void func_0031A5A0();
s32 func_0031A6C0();
s32 func_0031A6E0();
void func_0031C420();
extern char D_0035B220[];
extern char D_0035B230[];
extern u8 *D_00360568;
extern volatile u32 D_0036056C;
extern volatile u32 D_00360570;
extern volatile s32 D_00360580;
extern volatile s32 D_0036058C;

u32 func_002D8D10(s32 arg0, u32 arg1) {
    u32 total;
    u32 n;
    s32 id;
    unk_func_002D8D10_0 b;
    unk_func_002D8D10_0 a;

    total = 0;
    func_00308BE0(D_00360580);
    while (arg1 != 0) {
        if (D_00360570 >= arg1) {
            n = arg1;
        } else {
            arg1 = n = D_00360570;
            func_0031C420(D_0035B220);
        }
        if (D_0036056C + arg1 > 0x40000) {
            a.unk_04 = arg0;
            a.unk_0C = 0;
            a.unk_08 = n = 0x40000 - D_0036056C;
            a.unk_00 = D_00360568 + D_0036056C;
            func_0031A5A0(0);
            id = func_0031A6E0(&a, 1);
            while (func_0031A6C0(id) >= 0) {
            }
            func_0031C420(D_0035B230);
        } else {
            b.unk_04 = arg0;
            b.unk_08 = n;
            b.unk_0C = 0;
            b.unk_00 = D_00360568 + D_0036056C;
            func_0031A5A0(0);
            func_0031A6E0(&b, 1);
        }
        arg1 -= n;
        total += n;
        D_00360570 -= n;
        D_0036056C += n;
        D_0036056C &= 0x3FFFF;
    }
    D_0036058C++;
    func_00308B80(D_00360580);
    return total;
}
