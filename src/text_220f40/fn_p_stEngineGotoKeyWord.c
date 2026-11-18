/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[7];
    u8 unk_07;
} unk_fn_p_stEngineGotoKeyWord_0;

typedef struct {
    union {
        s32 unk_00;
        f32 unk_00_f32;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_fn_p_stEngineGotoKeyWord_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_fn_p_stEngineGotoKeyWord_2;

typedef struct {
    unk_fn_p_stEngineGotoKeyWord_0 **unk_00;
} unk_fn_p_stEngineGotoKeyWord_3;

typedef struct {
    u8 pad_00[8];
    unk_fn_p_stEngineGotoKeyWord_3 *unk_08;
} unk_fn_p_stEngineGotoKeyWord_4;

unk_fn_p_stEngineGotoKeyWord_0 *fn_p_stEvalTree(s32, unk_fn_p_stEngineGotoKeyWord_0 *,
                                                unk_fn_p_stEngineGotoKeyWord_1 *);
unk_fn_p_stEngineGotoKeyWord_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001971C0(s32);
s32 func_00198120(s32);
s32 func_0019D550(f32);
char *func_001AB9D0(s32);
s32 func_0011CBB0(char *, const char *, ...);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, const char *, s32);
void Erm_fn_ClearLastError(s32, const char *, s32);

extern const char D_0034E210[];
extern const char D_0034E228[];
extern const char D_0034E240[];
extern const char D_0034E270[];
extern u8 D_0035F588;
extern u8 D_0036013C;
extern unk_fn_p_stEngineGotoKeyWord_4 *D_00360140;

unk_fn_p_stEngineGotoKeyWord_0 *fn_p_stEngineGotoKeyWord(s32 arg0, unk_fn_p_stEngineGotoKeyWord_0 *arg1,
                                                       unk_fn_p_stEngineGotoKeyWord_1 *arg2) {
    unk_fn_p_stEngineGotoKeyWord_0 *temp0;
    s32 temp2;
    s32 temp3;
    unk_fn_p_stEngineGotoKeyWord_0 *temp7;
    char spA0[0xD0];

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp3 = arg2->unk_0C == 8 ? func_0019D550(arg2->unk_00.unk_00_f32) : arg2->unk_00.unk_00;
    arg2->unk_00.unk_00 = 0;
    arg2->unk_0C = 0x14;
    if (temp3 == 0) {
        func_0011CBB0(spA0, D_0034E210,
            func_001AB9D0(func_00198120((func_001971C0(arg0) != 2
                ? (unk_fn_p_stEngineGotoKeyWord_2 *)NULL
                : HIE_fn_hGetSuperObjectObject(arg0))->unk_04)));
        Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, 0x4E, -1, 0xFF, 0, spA0, D_0034E228, 0x1F5);
        Erm_fn_ClearLastError(0, D_0034E228, 0x1F5);
    } else if (temp3 < 0) {
        temp7 = D_00360140->unk_08->unk_00[D_0036013C];
        temp0 = arg1 + temp3;
        if (temp0 < temp7) {
            func_0011CBB0(spA0, D_0034E240,
                func_001AB9D0(func_00198120((func_001971C0(arg0) != 2
                    ? (unk_fn_p_stEngineGotoKeyWord_2 *)NULL
                    : HIE_fn_hGetSuperObjectObject(arg0))->unk_04)));
            Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, 0x4E, -1, 0xFF, 0, spA0, D_0034E228, 0x1FF);
            Erm_fn_ClearLastError(0, D_0034E228, 0x1FF);
        } else {
            return temp0;
        }
    } else {
        temp0 = arg1;
        for (temp2 = 0; temp2 < temp3; temp2++) {
            if (temp0->unk_07 == 8) {
                func_0011CBB0(spA0, D_0034E270,
                    func_001AB9D0(func_00198120((func_001971C0(arg0) != 2
                        ? (unk_fn_p_stEngineGotoKeyWord_2 *)NULL
                        : HIE_fn_hGetSuperObjectObject(arg0))->unk_04)));
                Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, 0x4E, -1, 0xFF, 0, spA0, D_0034E228, 0x20E);
                Erm_fn_ClearLastError(0, D_0034E228, 0x20E);
                return arg1;
            }
            temp0++;
        }
        return temp0;
    }
    return arg1;
}
