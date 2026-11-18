#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    u16 unk_18;
    u16 unk_1A;
    u8 pad_1C[0x2E];
    char unk_4A[1];
} unk_func_0018A6D0_0;

void func_0011B418(char *, char *);
void func_00285600(s32, s32, s32, s32, s32, u8 *);
void func_00285920(s32, s32, s32, s32, s32, s32, s32, s32, u8 *);
extern char D_003499E0[];
extern char D_00349A00[];
extern u8 D_0035FB0C;
extern u8 *D_0035FD9C;
extern s32 D_0035FDA0;
extern u8 *D_0035FDA4;
extern s32 D_007B2428[];

void func_0018A6D0(unk_func_0018A6D0_0 *arg0, s32 arg1, s32 arg2) {
    s32 w;
    s32 h;

    w = arg0->unk_1A;
    h = arg0->unk_18;
    D_007B2428[0] = 2;
    if (D_0035FB0C == 32) {
        func_00285920(0xDE1, 0, arg2, arg0->unk_1A, arg0->unk_18, 0, 0x1908, 0x1401, D_0035FD9C);
        D_0035FDA0++;
        D_0035FDA4 += arg0->unk_1A * arg0->unk_18 * 4;
        if (arg2 == 0x1907) {
            func_0011B418(D_003499E0, arg0->unk_4A);
        } else {
            func_0011B418(D_00349A00, arg0->unk_4A);
        }
    } else if (D_0035FB0C == 24) {
        func_00285920(0xDE1, 0, arg2, arg0->unk_1A, arg0->unk_18, 0, 0x1908, 0x1401, D_0035FD9C);
        D_0035FDA0++;
        D_0035FDA4 += arg0->unk_1A * arg0->unk_18 * 4;
        if (arg2 == 0x1907) {
            func_0011B418(D_003499E0, arg0->unk_4A);
        } else {
            func_0011B418(D_00349A00, arg0->unk_4A);
        }
    } else if (D_0035FB0C == 8) {
        func_00285600(0xDE1, 0x8058, 0x100, 0x1908, 0x1401, D_0035FD9C);
        func_00285920(0xDE1, 0, 0x1900, w, h, 0, 0x80E5, 0x1401, D_0035FD9C + 0x400);
        D_0035FDA0++;
        D_0035FDA4 += arg0->unk_1A * arg0->unk_18 + 0x400;
    } else {
        func_00285600(0xDE1, 0x8058, 0x10, 0x1908, 0x1401, D_0035FD9C);
        func_00285920(0xDE1, 0, 0x1900, w, h, 0, 0x80E4, 0x1401, D_0035FD9C + 0x40);
        D_0035FDA0++;
        D_0035FDA4 += ((arg0->unk_1A * arg0->unk_18) >> 1) + 0x40;
    }
    D_007B2428[0] = 0;
}
