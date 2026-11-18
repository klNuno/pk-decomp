#include "common.h"

typedef struct {
    char unk_00[0x10];
    u32 unk_10;
    char **unk_14;
} unk_func_0018A330_0;

typedef struct {
    u32 unk_00;
    unk_func_0018A330_0 unk_04[1];
} unk_func_0018A330_1;

void func_0011B418(char *);
void func_0011CC28(char *, char *, void *);
s32 func_0011D3F8(char *);
char *func_0011DB00(char *, char *);
s32 func_0018A590(s32, char *);
s32 func_001DA280(s32);
void func_001DA2B0(s32);
void func_001DA2D0(s32, void *, u32);
void func_001DA550(s32, s32, s32);
u32 func_001DA5E0(s32);
s32 func_00273F50(char *);
void *malloc(u32);
char *strcpy(char *, char *);
extern char D_00349968[];
extern char D_00349970[];
extern char D_00349978[];
extern char D_00349980[];
extern char D_00349988[];
extern char D_00349990[];
extern char D_003499C0[];
extern void *D_0035FDB4;
extern s32 D_0035FDB8;
extern u32 D_0035FDBC;
extern s32 D_0035FDC0;
extern unk_func_0018A330_1 D_00402CA0;

void func_0018A330(void) {
    char buf[0x400];
    s32 fd;
    u32 size;
    u32 i;
    unk_func_0018A330_0 *e;
    char *p;

    if (D_0035FDC0 == 0) {
        D_0035FDC0 = 1;
        fd = func_001DA280(func_00273F50(D_00349968));
        if (fd < 0) {
            D_00402CA0.unk_00 = 0;
            return;
        }
        size = func_001DA5E0(fd);
        func_001DA550(fd, 0, 0);
        D_0035FDB8 = 0;
        D_0035FDBC = size;
        p = __alloca(size);
        D_0035FDB4 = p;
        func_001DA2D0(fd, p, size);
        func_001DA2B0(fd);
        if (!func_0018A590(fd, buf)) goto fail;
        if (func_0011DB00(buf, D_00349970) != buf) goto fail;
        func_0011CC28(buf, D_00349978, &D_00402CA0.unk_00);
        for (i = 0; i < D_00402CA0.unk_00; i++) {
            e = &D_00402CA0.unk_04[i];
            if (!func_0018A590(fd, buf)) goto fail;
            if (buf[0] != '[') goto fail;
            p = func_0011DB00(buf, D_00349980);
            *p = 0;
            strcpy(e->unk_00, buf + 1);
            func_0011CC28(p + 1, D_00349988, &e->unk_10);
            e->unk_14 = malloc(e->unk_10 * 4);
            {
            u32 j;
            for (j = 0; j < e->unk_10; j++) {
                if (!func_0018A590(fd, buf)) goto fail;
                e->unk_14[j] = malloc(func_0011D3F8(buf) + 1);
                strcpy(e->unk_14[j], buf);
            }
            }
        }
        func_0011B418(D_00349990);
        return;
fail:
        func_0011B418(D_003499C0);
        D_00402CA0.unk_00 = 0;
    }
}
