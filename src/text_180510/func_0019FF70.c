/* profile: o0_301 */
#include "common.h"

typedef struct {
    s16 unk_00;
    u8 pad_02[8];
} unk_func_0019FF70_0;

typedef struct {
    volatile s32 unk_00;
    u8 pad_04[8];
} unk_func_0019FF70_1;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0xC];
    s32 unk_20;
} unk_func_0019FF70_2;

typedef struct {
    u8 pad_00[0x106];
    s16 unk_106;
} unk_func_0019FF70_3;

typedef struct {
    u8 pad_00[0x110];
    u8 unk_110[0x70];
} unk_func_0019FF70_4;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
unk_func_0019FF70_2 *HIE_fn_hGetSuperObjectObject(s32);
void func_00130930(f32 *, s16, s16, u8 *, s32, s32);
void func_00134CC0(void);
void func_00155EC0(s32, f32 *);
void func_0015D7A0(void);
void func_0015D9A0(void);
s32 func_00169660(s16, s16, u8 *, s32 *);
void func_00169730(s16, u8 *);
void func_00169760(s16);
void func_0016D010(void *);
void func_00170020(void);
s32 func_001979C0(s32);
void func_001A0230(s32);
s32 func_001AEC70(s32);
void func_001B5CC0(s32);
void func_001B5F10(s32);
s32 func_001BE470(s32);
extern char D_0034A080[];
extern u8 D_0035F528;
extern u8 D_0035FF20;
extern unk_func_0019FF70_4 D_005AB790;
extern unk_func_0019FF70_1 D_005AB7F0;
extern unk_func_0019FF70_0 D_005AB894;

s32 func_0019FF70(u8 arg0) {
    s32 unk_4C;
    f32 unk_40[3];
    s32 temp_s0;
    s32 temp_s1;

    func_00169760(D_005AB894.unk_00);
    func_00170020();
    if (func_00169660(D_005AB894.unk_00,
                      ((unk_func_0019FF70_3 *)((u8 *)&D_005AB790 + arg0 * 2))->unk_106,
                      D_005AB790.unk_110 + arg0 * 0x70, &unk_4C) == 0) {
        Erm_fn_ClearLastError(0, D_0034A080, 0x20);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x2A, -1, 0xFF, 0xFF, 0, D_0034A080, 0x20);
        return 0;
    }
    if (unk_4C != 0) {
        func_00134CC0();
        temp_s0 = func_001AEC70(arg0);
        func_00155EC0(func_001979C0(temp_s0), unk_40);
        temp_s1 = func_001BE470(HIE_fn_hGetSuperObjectObject(temp_s0)->unk_20);
        func_001B5CC0(HIE_fn_hGetSuperObjectObject(temp_s0)->unk_10);
        func_001A0230(temp_s1);
        func_0016D010(D_005AB790.unk_110 + arg0 * 0x70);
        (void)(D_0035FF20 == 0);
        func_0015D9A0();
        func_00130930(unk_40, D_005AB894.unk_00,
                      ((unk_func_0019FF70_3 *)((u8 *)&D_005AB790 + arg0 * 2))->unk_106,
                      D_005AB790.unk_110 + arg0 * 0x70, temp_s1, D_005AB7F0.unk_00);
        func_0015D7A0();
        func_001B5F10(HIE_fn_hGetSuperObjectObject(temp_s0)->unk_10);
        func_00169730(D_005AB894.unk_00, D_005AB790.unk_110 + arg0 * 0x70);
    } else {
        return -1;
    }
    return 1;
}
