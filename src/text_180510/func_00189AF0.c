/* profile: opt_300_noprop */
#include "common.h"

typedef struct unk_func_00189AF0_0 {
    u8 pad_00[4];
    s32 unk_04;
    u16 unk_08;
    u8 pad_0A[2];
    u16 unk_0C;
} unk_func_00189AF0_0;

typedef struct unk_func_00189AF0_1 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    void *unk_0C;
} unk_func_00189AF0_1;

extern s32 D_003FC100[];
extern s32 *D_003FC110[];
extern u16 D_003FC118[];
extern u16 D_003FC11A[];
extern u16 D_003FC11C[];
extern u16 D_003FC11E[];
extern char D_003FC14A[];
extern u8 D_003FC1D0[];
extern s32 *D_003FC21C[];
extern s32 D_003FC9E0[];
extern s32 D_003333C4[];
extern char D_003498C0[];
extern char D_00349860[];
extern unk_func_00189AF0_1 D_00402F00[];
extern u8 D_0035FB0C;
extern void *D_0035FD34;
extern void *D_0035FD98;
extern void *D_0035FD9C;
extern s32 D_0035FDAC;
extern u32 D_0035FDB0;
extern unk_func_00189AF0_0 *D_0035FDDC;

void memset(void *, s32, u32);
s32 func_00273F50(char *);
s32 func_001DA280(s32);
s32 func_001DA5E0(s32);
void func_001DA550(s32, s32, s32);
void *malloc(s32);
void func_001DA2D0(s32, void *, s32);
s32 *func_00164B20(s32);
void strcpy(char *, char *);
void func_0011B418(char *, ...);
void func_001DA2B0(s32);

void func_00189AF0(void) {
    s32 *ctx;
    s32 size;
    s32 *p;
    s32 fd;
    unk_func_00189AF0_0 *hdr;

    D_003FC21C[0] = D_003FC100;
    memset(D_003FC100, 0, 0xCC);
    D_003FC118[0] = 0x100;
    D_003FC11A[0] = 0x100;
    D_003FC11C[0] = 0x100;
    D_003FC11E[0] = 0x100;
    fd = func_001DA280(func_00273F50(D_003498C0));
    if (fd < 0) {
        D_0035FD34 = NULL;
        return;
    }
    ctx = D_003FC100;
    size = func_001DA5E0(fd);
    func_001DA550(fd, 0, 0);
    D_0035FDDC = malloc(size);
    func_001DA2D0(fd, D_0035FDDC, size);
    hdr = D_0035FDDC;
    D_003FC118[0] = hdr->unk_0C;
    D_003FC11A[0] = hdr->unk_08;
    D_003FC11C[0] = hdr->unk_0C;
    D_003FC11E[0] = hdr->unk_08;
    D_003FC110[0] = func_00164B20(4);
    p = D_003FC110[0];
    {
        s32 i = D_003333C4[0];
        D_003333C4[0] = i + 1;
        *p = D_003FC9E0[i];
    }
    strcpy(D_003FC14A, D_003498C0);
    D_003FC100[0] = 1;
    D_0035FDAC++;
    D_0035FD98 = D_0035FD9C = (u8 *)D_0035FDDC + 0x10;
    {
        s32 t = hdr->unk_04 & 0xF;
        if (t == 1) {
            D_0035FB0C = 4;
        } else if (t == 2) {
            D_0035FB0C = 8;
        } else if (t == 4) {
            D_0035FB0C = 0x20;
        }
    }
    {
        u32 n = D_0035FDB0;
        s32 f = D_0035FB0C;
        void *addr = D_0035FD9C;
        s32 sz = *p;
        if (n >= 500) {
            func_0011B418(D_00349860, addr, sz, n);
        } else {
            unk_func_00189AF0_1 *e;
            D_0035FDB0 = n + 1;
            e = &D_00402F00[n];
            e->unk_00 = addr;
            e->unk_04 = sz;
            e->unk_08 = f | 0x10000000;
            e->unk_0C = ctx;
        }
    }
    D_0035FD34 = D_003FC1D0;
    func_001DA2B0(fd);
}
