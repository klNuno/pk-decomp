#include "common.h"

typedef struct unk_func_001DBD00_1 {
    u8 pad_00[0x4];
    s16 unk_04;
} unk_func_001DBD00_1;

typedef struct unk_func_001DBD00_0 {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[0x8];
    s16 *unk_0C;
    unk_func_001DBD00_1 **unk_10;
} unk_func_001DBD00_0;

void func_001DBEB0();
void func_001DEBE0();
extern u8 D_00601840[];
extern s32 D_00601864[];
extern s32 D_00601888[];
extern s16 D_0060188C[];
extern unk_func_001DBD00_0 *D_00601890[];
extern s32 D_00601898[];
extern u8 D_006018A8[];
extern u8 D_006018A9[];
extern unk_func_001DBD00_0 *D_006018AC[];
extern s32 D_006018B0[];
extern s32 D_006018B4[];
extern unk_func_001DBD00_1 *D_00601AA4[];

void func_001DBD00(unk_func_001DBD00_0 *arg0, s32 arg1, s32 arg2, unk_func_001DBD00_0 *arg3, s32 arg4, s32 arg5, s16 arg6, u8 arg7, u8 arg8) {
    s16 i;

    D_006018A8[0] = arg7;
    D_006018B0[0] = arg2;
    D_006018B4[0] = arg1;
    D_00601864[0] = arg4;
    D_00601898[0] = 0x1FFFFFF;
    D_00601888[0] = arg5;
    D_0060188C[0] = arg6;
    D_006018AC[0] = arg0;
    D_00601890[0] = arg3;
    D_006018A9[0] = arg8;
    if (arg0 == 0 || arg3 == 0 || arg0->unk_00 == 0 || arg3->unk_00 == 0 || arg0->unk_02 == 0 || arg3->unk_02 == 0) {
        return;
    }
    func_001DBEB0(D_00601840);
    if (D_00601898[0] & 0x1FFE000) {
        for (i = 0; i < D_006018AC[0]->unk_02; i++) {
            switch (D_006018AC[0]->unk_0C[i]) {
            case 7:
                if (D_00601898[0] & 0x1E0000) {
                    D_00601AA4[0] = D_006018AC[0]->unk_10[i];
                    if (D_00601AA4[0]->unk_04 != 0) {
                        func_001DEBE0(D_00601840);
                    }
                }
                break;
            }
        }
    }
}
