/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x50];
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    u8 pad_6C[4];
    s32 unk_70;
} unk_func_00169850_0;

typedef struct {
    u8 pad_00[0x60];
    unk_func_00169850_0 *unk_60[16];
} unk_func_00169850_1;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, char *, s32);
void Mmg_fn_v_SetModeAlloc(u8, s32, s32);
void *fn_p_vGenAlloc(s32, s32);
void func_00169D50(unk_func_00169850_1 *, unk_func_00169850_0 *);
void *memcpy(void *, const void *, u32);
void *memset(void *, s32, u32);
extern char D_00349290[];
extern char D_003492B0[];
extern u8 D_0035F380;
extern unk_func_00169850_1 *D_0036A450[];

static inline s32 find(unk_func_00169850_1 *p, s16 *out) {
    s16 i;

    for (i = 0; i < 16; i++) {
        if (p->unk_60[i] == NULL) {
            *out = i;
            return 1;
        }
    }
    *out = -1;
    return 0;
}

s32 func_00169850(s16 arg0, unk_func_00169850_0 *arg1, s16 *arg2) {
    unk_func_00169850_1 *p;
    s16 slot;
    unk_func_00169850_0 *obj;

    p = D_0036A450[arg0];
    if (!find(p, &slot)) {
        *arg2 = -1;
        memset(arg1, 0xCC, 0x70);
        Erm_fn_v_UpdateLastError(0x34, D_0035F380, 0, 0x20, -1, 0xFF, 0xFF, D_00349290, D_003492B0, 0x2E7);
        return 0;
    }
    Mmg_fn_v_SetModeAlloc(D_0035F380, 0xFF, 0);
    obj = fn_p_vGenAlloc(0x74, 0);
    if (obj == NULL) {
        *arg2 = -1;
        memset(arg1, 0xCC, 0x70);
        return 0;
    }
    memset(obj, 0, 0x74);
    memcpy(obj, arg1, 0x70);
    func_00169D50(p, obj);
    obj->unk_00 = obj->unk_08;
    obj->unk_04 = obj->unk_0C;
    obj->unk_68 = 0;
    obj->unk_60 = 0;
    obj->unk_64 = -1;
    obj->unk_70 = 0;
    memcpy(arg1, obj, 0x70);
    D_0036A450[arg0]->unk_60[slot] = obj;
    *arg2 = slot + arg0 * 16;
    return 1;
}
