/* profile: o0_p */
#include "common.h"

typedef struct unk_func_0019FE00_0 {
    s32 unk_00;
    struct unk_func_0019FE00_0 *unk_04;
} unk_func_0019FE00_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0019FE00_1;

void func_00168DE0(s32);
void func_001AEF90();
void func_0019FF70(u8);
void func_001A03D0(u8);
s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001B4CB0(s32);
void func_0019FC70();
extern s32 D_005ABDC0[];
extern u8 D_0035FFA0;
extern s32 D_005AB848[];
extern unk_func_0019FE00_0 *D_005ABD88[];
extern s32 D_005AB8A0[];
extern s32 D_005AB7F0[];

void func_0019FE00(u8 arg0) {
    unk_func_0019FE00_0 *p;
    unk_func_0019FE00_1 *temp_s1;
    s32 n;
    s32 i;
    unk_func_0019FE00_0 *cur;
    unk_func_0019FE00_0 *first;

    if (D_005ABDC0[0] == 0 || D_0035FFA0 || !arg0) {
        func_00168DE0(D_005AB848[0]);
        func_001AEF90(arg0);
        func_0019FF70(arg0);
        func_001A03D0(arg0);
        if (D_0035FFA0 && !arg0) {
            n = 0;
            for (i = 0, p = D_005ABD88[0], first = p; p != NULL;
                 i++, p = p->unk_04, cur = p, (void)cur) {
                temp_s1 = (unk_func_0019FE00_1 *)HIE_fn_hGetSuperObjectObject(p->unk_00)[4];
                if (func_001B4CB0(temp_s1->unk_04)) {
                    n++;
                }
                if (n != D_0035FFA0 || !func_001B4CB0(temp_s1->unk_04)) {
                    if (p != NULL) {
                        func_0019FC70(D_005AB8A0, D_005AB7F0[0], p->unk_00);
                    }
                }
            }
        }
    }
}
