/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001BD580_0 unk_func_001BD580_0;
typedef struct unk_func_001BD580_1 unk_func_001BD580_1;

struct unk_func_001BD580_1 {
    unk_func_001BD580_0 *unk_00;
    unk_func_001BD580_0 *unk_04;
    s32 unk_08;
};

struct unk_func_001BD580_0 {
    unk_func_001BD580_0 *unk_00;
    unk_func_001BD580_0 *unk_04;
    unk_func_001BD580_1 *unk_08;
    s32 unk_0C;
    void *unk_10;
};

typedef struct {
    u8 pad_00[0x4];
    u8 unk_04;
} unk_func_001BD580_2;

typedef struct {
    u8 pad_00[0x24];
    unk_func_001BD580_2 *unk_24;
} unk_func_001BD580_3;

void HMU_fn_vFree(unk_func_001BD580_0 **, s32);
void func_002CE3B0(s32);
extern unk_func_001BD580_0 *D_005AD930[];

void func_001BD580(unk_func_001BD580_3 *arg0) {
    unk_func_001BD580_0 *found;
    unk_func_001BD580_0 *p;
    unk_func_001BD580_0 *next;
    s32 i;
    unk_func_001BD580_0 *head;

    found = 0;
    i = 0;
    head = p = D_005AD930[0];
    while (p != 0) {
        if (p->unk_10 == arg0) {
            found = p;
        }
        i++;
        next = p = p->unk_00;
        (void)next;
    }
    if (found != 0) {
        func_002CE3B0(found->unk_0C);
        if (found->unk_00 != 0) {
            found->unk_00->unk_04 = found->unk_04;
        }
        if (found->unk_04 != 0) {
            found->unk_04->unk_00 = found->unk_00;
        }
        if (found->unk_08 != 0) {
            found->unk_08->unk_08--;
            if (found->unk_08->unk_00 == found) {
                found->unk_08->unk_00 = found->unk_00;
            }
            if (found->unk_08->unk_04 == found) {
                found->unk_08->unk_04 = found->unk_04;
            }
        }
        found->unk_00 = 0;
        found->unk_04 = 0;
        found->unk_08 = 0;
        HMU_fn_vFree(&found, 0);
        arg0->unk_24->unk_04 = 0;
    }
}
