#include "common.h"

typedef struct {
    void *unk_00;
    u8 unk_04[4];
} unk_func_002F4EB0_0;

void func_002F4D60(unk_func_002F4EB0_0 *);
void func_002F52E0(u8 *);
void func_002F5290(u8 *);
extern char D_0035E830[];

unk_func_002F4EB0_0 *func_002F4EB0(unk_func_002F4EB0_0 *volatile arg0) {
    func_002F4D60(arg0);
    arg0->unk_00 = D_0035E830;
    func_002F52E0(arg0->unk_04);
    func_002F5290(arg0->unk_04);
    return arg0;
}
