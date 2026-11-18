/* profile: opt_300 */
#include "common.h"

typedef struct {
    u16 unk_00;
    u8 unk_02;
    u8 pad_03;
    s32 unk_04;
    s32 unk_08;
    char *unk_0C;
    u16 unk_10;
    u8 pad_12[2];
} unk_Erm_fn_v_UpdateLastError_0;

typedef struct {
    u16 unk_00;
    u8 pad_02[2];
    char *unk_04;
} unk_Erm_fn_v_UpdateLastError_1;

typedef struct {
    char *unk_00;
    char *unk_04;
    char *unk_08;
} unk_Erm_fn_v_UpdateLastError_2;

void Erm_fn_v_PrintErrMsgWithPersonalMsg(char *, char *, const char *);
void Erm_fn_v_Printsz(char *);
void func_0011CBB0(char *, char *, ...);
void func_001DB880(void);
void func_001DB8C0(char *, char *);

extern char D_0034C5A0[];
extern char D_0034C600[];
extern char D_0034C620[];
extern char D_0034C690[];
extern char D_0034C6C0[];
extern char D_0034C6D0[];
extern char D_0034C730[];
extern char D_0034C740[];
extern char D_0034C750[];
extern char D_0034C760[];
extern void (*D_003600F0)(void);
extern char D_005FF000[];
extern unk_Erm_fn_v_UpdateLastError_0 D_005FF200[];
extern unk_Erm_fn_v_UpdateLastError_1 *D_005FF240[];
extern unk_Erm_fn_v_UpdateLastError_2 *D_005FF640[];

#define UNK_00() { \
    u16 unk_00 = 0; \
    unk_Erm_fn_v_UpdateLastError_1 *unk_04 = D_005FF240[temp->unk_02]; \
    for (; unk_04[unk_00].unk_00 != temp->unk_00; unk_00++) { \
    } \
    func_0011CBB0(D_005FF000, D_0034C6D0, temp->unk_08, temp->unk_08, \
        D_005FF640[temp->unk_02]->unk_00, D_005FF640[temp->unk_02]->unk_04, \
        D_005FF640[temp->unk_02]->unk_08, temp->unk_0C, temp->unk_10, unk_04[unk_00].unk_04); \
}

void Erm_fn_v_UpdateLastError(u16 arg0, u8 arg1, s32 arg2, u16 arg3, s32 arg4, u8 arg5,
                               s32 arg6, const char *arg7, char *arg8, u16 arg9) {
    unk_Erm_fn_v_UpdateLastError_0 *temp;
    u8 unk_00;

    Erm_fn_v_Printsz(D_0034C5A0);
    for (unk_00 = 0; unk_00 < 3 && D_005FF200[unk_00].unk_00 != 0 && arg2 != D_005FF200[unk_00].unk_08; unk_00++) {
    }
    temp = unk_00 >= 3 ? NULL : &D_005FF200[unk_00];
    if (temp == NULL) {
        func_001DB8C0(D_0034C600, D_0034C620);
        func_001DB880();
        if (D_003600F0 != NULL) {
            D_003600F0();
        }
        for (;;) {}
    }
    if (temp->unk_00 != 0) {
        func_001DB8C0(D_0034C690, D_0034C6C0);
    }

    temp->unk_00 = arg3;
    temp->unk_02 = arg1;
    temp->unk_04 = arg4;
    temp->unk_08 = arg2;
    temp->unk_0C = arg8;
    temp->unk_10 = arg9;
    if (temp->unk_00 < arg0) {
        if (arg7 == NULL) {
            UNK_00();
            func_001DB8C0(D_0034C730, D_005FF000);
        } else {
            UNK_00();
            Erm_fn_v_PrintErrMsgWithPersonalMsg(D_0034C740, D_005FF000, arg7);
        }
        func_001DB880();
        if (D_003600F0 != NULL) {
            D_003600F0();
        }
        for (;;) {}
    }
    if (arg7 == NULL) {
        UNK_00();
        func_001DB8C0(D_0034C750, D_005FF000);
    } else {
        UNK_00();
        Erm_fn_v_PrintErrMsgWithPersonalMsg(D_0034C750, D_005FF000, arg7);
    }
    if ((u8)arg6) {
        func_001DB880();
    }
    Erm_fn_v_Printsz(D_0034C760);
}
