/* profile: o0_p */
#include "common.h"

typedef struct unk_func_00274260_1 {
    u8 pad_00[0x90];
    s32 unk_90;
    s16 unk_94;
} unk_func_00274260_1;

typedef struct unk_func_00274260_0 {
    u32 unk_00;
    unk_func_00274260_1 **unk_04[3];
} unk_func_00274260_0;

void func_00161B90();
void func_0018A950();
void func_0027B250(s32);
void func_002CF3E0();
void func_002D0370(char *);
void func_002D4D30();
extern char D_0034EC38[];
extern unk_func_00274260_0 D_005ACC80;

void func_00274260(void) {
    u32 i;

    func_0018A950();
    func_002D4D30();
    func_002CF3E0();
    func_002CF3E0();
    func_002D0370(D_0034EC38);
    func_00161B90();
    func_0027B250(1);
    for (i = 0; i < D_005ACC80.unk_00; i++) {
        (*D_005ACC80.unk_04[i])->unk_90 = 0;
        (*D_005ACC80.unk_04[i])->unk_94 = 0;
        (*D_005ACC80.unk_04[i])->unk_94 = 0;
    }
}
