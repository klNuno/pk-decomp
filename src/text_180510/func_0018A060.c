#include "common.h"

typedef struct unk_func_0018A060_0 {
    char unk_00[0x100];
    s32 unk_100;
} unk_func_0018A060_0;

s32 func_00273F50(char *);
s32 func_001DA280(s32);
void func_0011B418(char *);
void func_001DA2D0(s32, s32 *, s32);
void *malloc(u32);
void func_0018A170(s32, void *, u32);
char *func_0011DB00(char *, char *);
char *strcpy(char *, char *);
extern char D_00349920[];
extern char D_00349930[];
extern char D_00349958[];
extern char D_00349960[];
extern s32 D_0035F4E4;
extern s32 D_0035FDC8;
extern s32 D_0035FDCC;
extern unk_func_0018A060_0 *D_0035FDD8;

void func_0018A060(void) {
    s32 sp3C;
    s32 i;
    char *p;

    D_0035FDC8 = 1;
    D_0035F4E4 = func_001DA280(func_00273F50(D_00349920));
    if (D_0035F4E4 < 0) {
        func_0011B418(D_00349930);
        return;
    }
    func_001DA2D0(D_0035F4E4, &D_0035FDCC, 4);
    D_0035FDD8 = malloc(D_0035FDCC * sizeof(unk_func_0018A060_0));
    for (i = 0; i < D_0035FDCC; i++) {
        func_0018A170(D_0035F4E4, &sp3C, 4);
        func_0018A170(D_0035F4E4, D_0035FDD8[i].unk_00, (u32)sp3C);
        p = func_0011DB00(D_0035FDD8[i].unk_00, D_00349958);
        if (p != NULL) {
            strcpy(p, D_00349960);
        }
        func_0018A170(D_0035F4E4, &D_0035FDD8[i].unk_100, 4);
    }
}
