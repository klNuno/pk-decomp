/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00199B80_0 {
    struct unk_func_00199B80_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    s32 *unk_10;
} unk_func_00199B80_0;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x1C];
    s32 unk_34;
    s32 unk_38;
    u8 pad_3C[0x44];
} unk_func_00199B80_1;

typedef struct {
    void (*unk_00)(s32 *, s32 *);
    u8 pad_04[4];
    void (*unk_08)(s32 *);
    u8 pad_0C[4];
    void (*unk_10)(s32 *, s32);
    u8 pad_14[4];
} unk_func_00199B80_2;

typedef struct {
    s32 unk_00[11];
} unk_func_00199B80_3;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x18];
    s32 unk_1C;
} unk_func_00199B80_4;

typedef struct {
    u8 pad_00[0x53];
    u8 unk_53;
} unk_func_00199B80_5;

extern unk_func_00199B80_2 D_00333510[];
extern u32 D_003338C0[];
extern unk_func_00199B80_0 *D_003338C4[];
extern unk_func_00199B80_1 *D_003338D0[];
extern unk_func_00199B80_3 *D_003338D4[];
extern s32 *D_003338D8[];
extern char D_00349ED8[];
extern s32 D_0035F508;
extern u8 D_0035F528;
extern s32 D_0035FEB8;
extern s32 D_0035FEBC;
extern s32 D_0035FF6C;
extern s32 D_005AB800[];

void Erm_fn_ClearLastError(s32, const char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, const char *, s32);
s32 *HIE_fn_hGetSuperObjectObject(void *);
void *func_00132470(s32, s32);
s32 func_00132730(s32, s32 *);
void func_00153920(void *, void *, void *);
s32 func_00155EE0(void *);
s32 func_00197860(s32);
unk_func_00199B80_4 *func_00197880(s32);
void func_001978A0(s32, s32);
void func_001978D0(s32, s32);
void func_00197900(s32, s32);
void func_00197950(s32, s32);
void *func_001979A0(void *);
void *func_001979C0(void *);
void func_001979E0(void *, void *);
void func_00197B50(void *, void *);
s32 func_00197CC0(s32);
s32 func_00199130(s32);
void func_00199760(s32, u32);
void func_0019A230(void *);
void func_0019A250(s32, s32);
void func_0019A290(void *, s32);
void func_0019A2C0(void *, s32);
s32 func_0019FB60(s32);
unk_func_00199B80_5 *func_001ABA70(s32);
void func_001BE490(s32, void *);
void *func_001BE4C0(s32);
void func_001BFA70(s32, void *);
void func_001D4B50(s32, s32);

void *func_00199B80(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    unk_func_00199B80_1 *temp0 = NULL;
    s32 *temp1 = NULL;
    s32 temp2 = 0;
    u32 i = 0;
    unk_func_00199B80_0 *temp3 = D_003338C4[0];
    s32 temp6;
    unk_func_00199B80_0 *temp4 = temp3;
    unk_func_00199B80_0 *temp5;
    u32 j;
    void *temp7;

    (void)temp4;
    for (; temp3 != NULL; ) {
        if (temp3->unk_0C == arg0) {
            if (D_0035F508 < 0) {
                unk_func_00199B80_1 *temp8;
                temp0 = D_003338D0[0];
                for (i = 0; i < D_003338C0[0] && (D_003338D8[0][i] || temp0->unk_14); ) {
                    i++;
                    temp8 = temp0++;
                    (void)temp8;
                }
                if (i >= D_003338C0[0]) {
                    return NULL;
                }
            } else {
                i = D_0035F508;
                D_0035F508 = -1;
                temp0 = &D_003338D0[0][i];
            }
            D_0035FEBC++;
            if (D_0035FEB8 < D_0035FEBC) {
                D_0035FEB8 = D_0035FEBC;
            }
            D_003338D8[0][i] = arg2;
            temp1 = HIE_fn_hGetSuperObjectObject(temp0);
            func_0019A2C0(temp0, 0);
            func_0019A290(temp0, -1);
            for (j = 0; j < 11; j++) {
                if (*(s32 *)((u8 *)temp3->unk_10 + (j << 2))) {
                    if (!D_003338D4[0][i].unk_00[j]) {
                        D_00333510[j].unk_08(D_003338D4[0][i].unk_00);
                    }
                    temp1[j] = D_003338D4[0][i].unk_00[j];
                    D_00333510[j].unk_00(temp1, temp3->unk_10);
                }
            }
            func_00199760(temp1[1], i + 0x10000);
            func_001BFA70(temp1[1], temp0);
            if (temp1[0]) {
                func_0019A250(temp1[0], arg4);
            }
            func_00153920(func_001979C0(temp0), func_001979C0(arg1), func_001979A0(temp0));
            func_0019A230(temp0);
            temp2 = func_00155EE0(func_001979C0(temp0));
            temp7 = func_001BE4C0(arg2);
            if (!func_00132730(temp2, HIE_fn_hGetSuperObjectObject(temp7))) {
                temp7 = func_00132470(D_0035FF6C, temp2);
            }
            if (!temp7) {
                D_003338D8[0][i] = 0;
                return NULL;
            }
            func_001BE490(temp1[8], temp7);
            for (j = 0; j < 11; j++) {
                if (temp1[j]) {
                    D_00333510[j].unk_10(temp1, 5);
                }
            }
            if (func_00197CC0(HIE_fn_hGetSuperObjectObject(temp0)[1])) {
                func_00197B50(arg1, temp0);
            } else {
                func_001979E0(arg1, temp0);
            }
            func_00197950(temp1[1], 1);
            temp0->unk_34 = func_0019FB60(func_00199130(temp1[0]));
            temp0->unk_38 = func_0019FB60(func_00199130(temp1[0]));
            func_00197900(temp1[1], 1);
            func_001978D0(temp1[0], D_005AB800[0]);
            func_001978A0(temp1[0], D_005AB800[0]);
            if (!func_00197880(temp1[0])->unk_00) {
                if (func_00197860(temp1[0])) {
                    unk_func_00199B80_5 *temp9;
                    temp6 = func_00197860(temp1[0]);
                    temp9 = func_001ABA70(temp6);
                    if (temp9) {
                        func_001D4B50(temp1[0], temp9->unk_53);
                        func_00197880(temp1[0])->unk_1C = 0;
                    }
                }
                func_00197880(temp1[0])->unk_1C = 0;
            }
            return temp0;
        }
        i++;
        temp5 = temp3 = temp3->unk_00;
        (void)temp5;
    }
    Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x36, -1, 0xFF, 0xFF, 0, D_00349ED8, 0x29D);
    Erm_fn_ClearLastError(0, D_00349ED8, 0x29E);
    return NULL;
}
