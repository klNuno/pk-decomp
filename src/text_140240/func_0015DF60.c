/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015DF60_0 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    s32 unk_10;
    struct unk_func_0015DF60_0 *unk_14;
} unk_func_0015DF60_0;

typedef struct {
    s32 unk_00;
    unk_func_0015DF60_0 *unk_04;
    unk_func_0015DF60_0 *unk_08;
} unk_func_0015DF60_1;

void func_0015CA40();
void func_0015DE60();
void func_001765C0();
extern u8 D_0035F3E8;
extern u8 D_0035F978;
extern s32 D_0035F97C;
extern u8 D_0035F980;
extern s32 D_0035F984;
extern s32 D_0035F988;
extern s32 D_0035F98C;
extern s32 D_0035F990;
extern s32 D_0035F994;
extern s32 D_0035F998;
extern u8 D_0035F99C;
extern u8 D_0035F9A0;
extern u8 D_0035F9A4;
extern u8 D_0035F9A8;
extern s32 D_0035F9AC;
extern unk_func_0015DF60_1 *D_0035FF74;

void func_0015DF60(void) {
    unk_func_0015DF60_1 *s1;
    unk_func_0015DF60_0 *p;

    s1 = D_0035FF74;
    D_0035F978 = 0;
    D_0035F97C = 0;
    D_0035F3E8 = 1;
    D_0035F980 = 0;
    D_0035F984 = 0;
    D_0035F988 = 0;
    D_0035F98C = 0;
    D_0035F990 = 0;
    D_0035F994 = 0;
    D_0035F998 = 0;
    D_0035F99C = 0;
    D_0035F9A0 = 0;
    D_0035F9A4 = 0;
    D_0035F9A8 = 0;
    D_0035F9AC = 0;
    for (p = s1->unk_08; p != NULL; p = p->unk_14) {
        func_0015DE60(p);
    }
    if (s1->unk_00 == 0x20) {
        p = s1->unk_04;
        func_001765C0(p);
        if (p->unk_04 != 0) {
            func_0015CA40(p, 0);
            p->unk_14 = NULL;
            p->unk_10 = -1;
        }
    }
}
