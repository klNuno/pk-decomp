/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015E150_0 {
    s16 unk_00;
    s16 unk_02;
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
    void *unk_10;
} unk_func_0015E150_0;

void *HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(void *, s32);
s16 func_0015EEE0(s16);
void func_0015F130(s16, u8 *);
s16 func_0015F150(void);
void memset();
void func_0015ED90();

unk_func_0015E150_0 *func_0015E150(s16 arg0) {
    unk_func_0015E150_0 *p;

    if (func_0015F150() != 1) {
        return NULL;
    }
    {
        p = HMU_fn_p_vMalloc(0x14, 1);
        if (p != NULL) {
            p->unk_00 = 0x10;
            p->unk_02 = arg0;
            p->unk_04 = HMU_fn_p_vMalloc(0x58, 1);
            if (p->unk_04 != NULL) {
                memset(p->unk_04, 0, 0x58);
                func_0015F130(p->unk_02, (void *)p->unk_04);
                p->unk_08 = HMU_fn_p_vMalloc(0x60, 1);
                if (p->unk_08 != NULL) {
                    memset(p->unk_08, 0, 0x60);
                    p->unk_0C = HMU_fn_p_vMalloc(0x60, 1);
                    if (p->unk_0C != NULL) {
                        memset(p->unk_0C, 0, 0x60);
                        if (func_0015EEE0(p->unk_02) == 1) {
                            *p->unk_08 |= 1;
                        }
                        p->unk_10 = func_0015ED90;
                        return p;
                    }
                    HMU_fn_vFree(&p->unk_08, 1);
                }
                HMU_fn_vFree(&p->unk_04, 1);
            }
            HMU_fn_vFree(&p, 1);
        }
    }
    return NULL;
}
