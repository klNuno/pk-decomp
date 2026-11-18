#include "common.h"

typedef struct {
    u8 unk_00_0 : 5;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 2;
    u8 pad_01[0xF];
} unk_func_00189050_0;

typedef struct {
    u8 unk_00_0 : 4;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 3;
    u8 pad_01[0xF];
} unk_func_00189050_1;

typedef struct {
    u8 pad_00[0x1CC];
    s32 unk_1CC;
} unk_func_00189050_2;

void func_00285BD0(s32, s32);
void func_00285BE0(s32, void *);
void func_00285BF0(s32, f32);
extern u8 D_00333380[];
extern f32 D_0035F4E0;
extern unk_func_00189050_2 *D_0035FB04;
extern s32 D_0035FD6C;
extern f32 D_0035FD74;
extern unk_func_00189050_0 D_007B08C0;
extern unk_func_00189050_1 D_007B09D2;
extern u32 D_007B2370[];
extern u8 *D_007B8F58[];

void func_00189050(void) {
    if (D_0035FB04->unk_1CC != 0) {
        if (D_0035FD6C != 1) {
            D_007B2370[0] |= 0x80;
            D_007B08C0.unk_00_5 = 1;
            D_007B09D2.unk_00_4 = 1;
            *D_007B8F58[0] = 1;
            func_00285BD0(0xB65, 0x2601);
            func_00285BF0(0xB63, D_0035FD74);
            func_00285BF0(0xB64, D_0035F4E0);
            func_00285BE0(0xB66, D_00333380);
            D_0035FD6C = 1;
        }
    } else if (D_0035FD6C != 3) {
        D_007B2370[0] &= ~0x80;
        D_007B08C0.unk_00_5 = 0;
        D_007B09D2.unk_00_4 = 1;
        *D_007B8F58[0] = 0;
        D_0035FD6C = 3;
    }
}
