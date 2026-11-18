#include "common.h"

typedef struct {
    u8 pad_00[0x60];
} unk_func_00193000_0;

typedef struct {
    u8 *unk_00;
} unk_func_00193000_1;

typedef struct {
    u8 pad_00[0x68];
    unk_func_00193000_1 *unk_68;
} unk_func_00193000_2;

void func_00150C20();
void func_00155810();
void func_00155EC0();
extern f32 D_0035FEB0;
extern f32 D_005A8D80[];
extern u8 D_005A8D90[];
extern u8 D_005A8DA0[];
extern u8 D_005A8DB0[];
extern u8 D_005A8DC0[];
extern u8 D_005A8DD0[];

void func_00193000(unk_func_00193000_2 *arg0, f32 arg1) {
    unk_func_00193000_0 sp30;
    u8 *temp;

    temp = arg0->unk_68->unk_00;
    func_00150C20(&sp30, temp + 0x10);
    D_005A8D80[0] = 0.0f;
    D_005A8D80[2] = -1.0f;
    D_005A8D80[1] = 0.0f;
    func_00155810(D_005A8D90, &sp30, D_005A8D80);
    func_00155EC0(&sp30, D_005A8D80);
    func_00155810(D_005A8DD0, &sp30, temp + 0xB4);
    func_00155810(D_005A8DC0, &sp30, temp + 0xA4);
    func_00155810(D_005A8DB0, &sp30, temp + 0xC4);
    func_00155810(D_005A8DA0, &sp30, temp + 0xD4);
    D_0035FEB0 = arg1;
}
