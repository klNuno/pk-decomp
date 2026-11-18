/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 unk_00[4];
} unk_0019F4A0_0;

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} unk_0019F4A0_1;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
unk_0019F4A0_1 *HIE_fn_hGetSuperObjectObject(void *);
s16 func_00129C50(s32);
void func_0012C3E0(void *);
void func_0012C570(void);
void func_0012F330(void);
void func_00161B80(void);
void func_00164000(void);
void func_00164B60(void);
s32 func_001695C0(s16, s32);
void func_00169D10(s16, s32, s32);
u32 func_0019ABC0(void *);
void func_0019D7C0(void);
void func_0019EF10(void);
u8 func_0019F060(void);
void func_001A5060(void *);
void *func_001A7D60(void *);
void *func_001A7D80(void);
void func_001AEF90(s32);
void func_001C8710(void);
void func_001D1EF0(void *, f32 *);
void func_001D2560(s32);
void func_001DA080(void);
void func_0022A250(void);
void func_002815C0(void);
void func_00281650(void);

extern f32 D_003370A8[];
extern f32 D_003370AC[];
extern f32 D_003370B0[];
extern char D_00349FF8[];
extern void (*D_0035F518)(void);
extern void (*D_0035F51C)(s32);
extern void (*D_0035F520)(u8);
extern u8 D_0035F528;
extern s8 D_0035FD28;
extern s8 D_0035FD2C;
extern u8 D_0035FEF4;
extern u8 D_0035FF20;
extern u8 D_0035FF24;
extern s8 D_0035FF34;
extern unk_0019F4A0_0 D_0035FF38;
extern void *D_003608C0;
extern u8 D_005AB790[];
extern u8 D_005AB880[];
extern s16 D_005AB894[];
extern u8 D_005ABA60[];
extern u8 D_005ACAD0[];

void func_0019F4A0(void)
{
    u8 temp;
    s32 i;

    func_00161B80();
    D_005AB894[0] = func_00129C50(0);

    if (!func_0019F060()) {
        D_0035F51C(0);
        func_001D1EF0(func_001A7D60(func_001A7D80()), D_003370A8);
        D_003370A8[0] = 0.0f;
        D_003370AC[0] = 0.0f;
        D_003370B0[0] = 0.0f;
        if (D_003608C0 != NULL &&
            (!D_0035FF34 ||
             (func_0019ABC0(HIE_fn_hGetSuperObjectObject(func_001A7D60(func_001A7D80()))->unk_04) & 0x100000))) {
            func_001A5060(D_003608C0);
        }
        D_0035FF34 = D_005ACAD0[0];
        func_0022A250();

        if (D_005AB790[0] != 2) {
            if (D_0035FEF4) {
                func_0019EF10();
            }
            func_0019D7C0();
            func_0012F330();
            func_00169D10(D_005AB894[0], 0, 3);

            if (D_0035FF24) {
                for (i = 0; i < 4; i++) {
                    temp = D_0035FF38.unk_00[i];

                    if (temp < D_005AB880[0]) {
                        D_0035FF20 = temp;
                        D_0035F520(temp);
                    }
                }
            } else {
                if (D_0035FD28 == 4 && D_005AB880[0] == 1) {
                    D_0035FD2C = 1;
                }
                for (temp = 0; temp < D_005AB880[0]; temp++) {
                    D_0035FF20 = temp;
                    D_0035F520(temp);
                }
                if (D_0035FD28 == 4 && D_005AB880[0] == 1) {
                    D_0035FD2C = 2;
                    func_001AEF90(0);
                    D_0035FF20 = 0;
                    D_0035F520(0);
                    D_0035FD2C = 0;
                }
            }
            D_0035FF20 = 0xFF;
            func_001AEF90(4);
            func_0012C570();
            func_0012C3E0(D_005ABA60);
            func_001D2560(4);
            func_00164000();
            if (D_005AB790[0] != 8) {
                func_00164B60();
                if (func_001695C0(D_005AB894[0], 0xFE) == 0) {
                    Erm_fn_ClearLastError(0, D_00349FF8, 0x4C7);
                    Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x2C, -1, 0xFF, 0xFF, 0, D_00349FF8, 0x4C7);
                }
            }
            func_001C8710();
            D_0035F518();
            func_00281650();
            func_002815C0();
            func_001DA080();
        }
    }
}
