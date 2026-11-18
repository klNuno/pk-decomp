#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x28];
    void *unk_30;
} unk_func_0018ECD0_0;

void func_0018FBE0();
void func_0018E410();
void func_00119548();
extern u8 D_0035E470[];
extern s32 D_0035FDF8;

void func_0018ECD0(unk_func_0018ECD0_0 **arg0) {
    unk_func_0018ECD0_0 *p;

    if (arg0 != NULL) {
        p = *arg0;
        if (p != NULL) {
            if (p != NULL) {
                p->unk_30 = D_0035E470;
                func_0018FBE0(p);
                if (p->unk_04 != 0) {
                    func_0018E410(p->unk_04);
                    p->unk_04 = 0;
                    p->unk_00 = 0;
                }
                D_0035FDF8--;
                func_00119548(p);
            }
        }
        *arg0 = NULL;
    }
}
