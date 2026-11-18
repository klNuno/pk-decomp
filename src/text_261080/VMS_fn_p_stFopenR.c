/* profile: o0_301 */
#include "common.h"

typedef struct unk_VMS_fn_p_stFopenR_0 {
    s32 unk_00;
    u8 unk_04[0x4];
    char *unk_08;
    u8 pad_0C[0x24];
    s32 unk_30;
    u8 unk_34;
    u8 pad_35[0x3];
} unk_VMS_fn_p_stFopenR_0;

s32 SVG_fn_bGetActiveVms(void);
s32 func_00116470(s32);
void func_00119548(void *);
void func_0011B418(char *);
s32 func_001D0280(s32, char *, s32 *, u8 *);
void *malloc(u32);
void *memset(void *, s32, u32);
extern char D_0034F4D0[];

unk_VMS_fn_p_stFopenR_0 *VMS_fn_p_stFopenR(char *arg0) {
    s32 vms;
    unk_VMS_fn_p_stFopenR_0 *f;
    s32 a;
    s32 b;

    vms = SVG_fn_bGetActiveVms();
    if (vms == -1) {
        return NULL;
    }
    if (arg0 == NULL) {
        return NULL;
    }
    f = malloc(0x38);
    memset(f, 0, 0x38);
    if (f == NULL) {
        return NULL;
    }
    f->unk_00 = 0;
    f->unk_34 = 'r';
    f->unk_08 = arg0;
    a = (s32)arg0;
    b = (s32)&arg0;
    if (func_00116470(b - a) < 20000) {
        func_0011B418(D_0034F4D0);
    }
    if (func_001D0280(vms, f->unk_08, (void *)&f->unk_30, (void *)f->unk_04) == 0) {
        func_00119548(f);
        return NULL;
    }
    if (f->unk_30 == 0) {
        func_00119548(f);
        return NULL;
    }
    return f;
}
