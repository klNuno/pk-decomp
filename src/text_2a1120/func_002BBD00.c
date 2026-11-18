#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14, unk_18, unk_1C, unk_20;
} unk_002BBD00_0;

typedef struct {
    unk_002BBD00_0 *unk_00;
    u8 pad_04[0x18];
} unk_002BBD00_1;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_002BBD00_2;

typedef struct {
    u8 pad_00[0x24];
    u8 : 3;
    u8 unk_24 : 2;
    u8 : 3;
    u8 pad_25[0xB];
    u16 : 5;
    u16 unk_30_5 : 1;
    u16 unk_30_6 : 3;
    u16 : 7;
    u8 pad_32[0x2E];
    u8 unk_60_0 : 2;
    u8 unk_60_2 : 2;
    u8 : 4;
} unk_002BBD00_3;

extern unk_002BBD00_2 *D_007B25B0[];
extern unk_002BBD00_3 *D_007B26F0[];
extern s32 D_007B26F4[], D_007B26FC[], D_007B2704[], D_007B8480[];
extern unk_002BBD00_1 D_007B2718[], D_007B271C[], D_007B2720[];

void func_002BBD00(s32 arg0) {
    unk_002BBD00_0 *temp;

    switch (arg0) {
    case 0xDE0:
        temp = D_007B2718[D_007B26F4[*D_007B8480]].unk_00;
        break;
    case 0xDE1:
        temp = D_007B271C[D_007B26FC[*D_007B8480]].unk_00;
        break;
    case 0x8513:
    case 0x8515:
    case 0x8516:
    case 0x8517:
    case 0x8518:
    case 0x8519:
    case 0x851A:
        temp = D_007B2720[*D_007B2704].unk_00;
        break;
    default:
        temp = NULL;
        break;
    }

    if (temp != NULL) {
        if (temp->unk_18 == 0x2600) {
            (*D_007B26F0)->unk_30_5 = 0;
        } else {
            (*D_007B26F0)->unk_30_5 = 1;
        }
        switch (temp->unk_14) {
        case 0x2600: (*D_007B26F0)->unk_30_6 = 0; break;
        case 0x2601: (*D_007B26F0)->unk_30_6 = 1; break;
        case 0x2700: (*D_007B26F0)->unk_30_6 = 2; break;
        case 0x2701: (*D_007B26F0)->unk_30_6 = 4; break;
        case 0x2702: (*D_007B26F0)->unk_30_6 = 3; break;
        case 0x2703: (*D_007B26F0)->unk_30_6 = 5; break;
        }
        switch (temp->unk_1C) {
        case 0x2901: (*D_007B26F0)->unk_60_0 = 0; break;
        case 0x2900: (*D_007B26F0)->unk_60_0 = 1; break;
        }
        switch (temp->unk_20) {
        case 0x2901: (*D_007B26F0)->unk_60_2 = 0; break;
        case 0x2900: (*D_007B26F0)->unk_60_2 = 1; break;
        }
        switch ((*D_007B25B0)->unk_10) {
        case 0x2100: (*D_007B26F0)->unk_24 = 0; break;
        case 0x2101: (*D_007B26F0)->unk_24 = 1; break;
        case 0xBE2: break;
        case 2:
        case 3: (*D_007B26F0)->unk_24 = (*D_007B25B0)->unk_10; break;
        }
    }
}
