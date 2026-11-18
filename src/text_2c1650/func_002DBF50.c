/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002DBF50_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    u8 *unk_24;
} unk_func_002DBF50_0;

void c4sdk_malloc(s32 *, s32);
void func_002CDB60(s32 *, char *, s32 *);
void func_002DD020(unk_func_002DBF50_0 *, s32 *);
extern char D_0035B620[];

void func_002DBF50(unk_func_002DBF50_0 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp;
    s32 temp2;
    s32 temp3;
    s32 rem;

    temp3 = arg0->unk_10;
    rem = temp3 & 3;
    if (rem != 0) {
        arg0->unk_10 = temp3 + (4 - rem);
    }
    switch (*(s32 *)(arg0->unk_24 + arg0->unk_10)) {
    case 13:
        *arg2 = arg0->unk_0C - *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        *arg1 = arg0->unk_18;
        arg0->unk_10 += 8;
        break;
    case 7:
        *arg2 = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        *arg1 = arg0->unk_20;
        arg0->unk_10 += 8;
        break;
    default:
        func_002CDB60(&temp, D_0035B620, &temp2);
        func_002DD020(arg0, &temp);
        arg0->unk_10 += 8;
        *arg1 = 0;
        c4sdk_malloc(&temp, 0);
        break;
    }
}
