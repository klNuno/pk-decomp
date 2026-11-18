/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015EB60_0 {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0C;
} unk_func_0015EB60_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void HMU_fn_vFree(void *, s32);
extern char D_00348D40[];
extern u8 D_0035F3F8;
extern u8 D_0035F9B0;
extern s16 D_0035F9B4;
extern unk_func_0015EB60_0 *D_0035F9C0[2];

void func_0015EB60(void) {
    s16 i;
    unk_func_0015EB60_0 *p;

    if (D_0035F9B0 != 0) {
        for (i = D_0035F9B4 - 1; i >= 0; i--) {
            if (i >= D_0035F9B4) {
                Erm_fn_v_UpdateLastError(6, D_0035F3F8, 0, 7, -1, 0xFF, 0xFF, 0, D_00348D40, 0x37);
            } else {
                p = D_0035F9C0[i];
                HMU_fn_vFree(&p->unk_08, 1);
                HMU_fn_vFree(&p->unk_04, 1);
                HMU_fn_vFree(&p->unk_0C, 1);
                HMU_fn_vFree(&p, 1);
                D_0035F9B4--;
                D_0035F9C0[i] = D_0035F9C0[D_0035F9B4];
                D_0035F9C0[D_0035F9B4] = NULL;
            }
        }
    }
    D_0035F9B0 = 0;
}
