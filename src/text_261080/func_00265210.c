/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x14];
} unk_func_00265210_0;

typedef struct {
    u8 pad_00[0x10];
} unk_func_00265210_1;

typedef struct {
    u8 pad_00[0x7C];
    s32 unk_7C;
    s32 unk_80;
    u8 pad_84[0xC];
} unk_func_00265210_2;

extern f32 func_00167A50(void);
extern void func_00167A70(f32);
extern s32 func_0016BE80(s32);
extern void func_00179AB0(void);
extern void func_0017D910(void);
extern void func_0017D970(unk_func_00265210_1 *, s32, s32, s32, f32, f32);
extern void func_0017DF90(s32);
extern void func_0017E040(void);
extern void func_0017E9E0(void);
extern void func_002582E0(s32, unk_func_00265210_0 *);
extern void func_00258580(s32);
extern void func_00258BC0(s32);
extern void func_00263A90(u32, s32);
extern void func_002702F0(s32);
extern s32 D_0035F5AC;
extern s8 D_0035FAD4;
extern s32 D_0035FD60;
extern s32 D_0035FD70;
extern u32 D_00360210;
extern s32 D_00360228;
extern s32 D_0036022C;
extern s32 D_00360290;
extern s32 D_00360294;
extern u32 D_0036029C;
extern unk_func_00265210_0 D_00618040[];
extern s8 D_006180E0[];
extern unk_func_00265210_1 D_00618180[];
extern unk_func_00265210_2 D_00633320[];

void func_00265210(s32 arg0) {
    s32 i;
    u32 j;
    u32 offset;
    unk_func_00265210_2 *p;
    s32 s2;
    u32 m;
    u32 k;
    f32 temp;
    s32 s6;
    s32 v1;
    u32 n;

    func_00179AB0();
    func_0017DF90(arg0);
    func_0017E040();
    D_0035FD70 = 0;
    func_002702F0(arg0);
    func_00258580(arg0);
    func_0017D910();
    D_0035FD60 = 1;
    D_0035FD70 = 0;
    func_00167A70(255.0f);
    for (i = 0; i < D_00360290; i++) {
        func_002582E0(arg0, &D_00618040[i]);
    }
    D_0035FD60 = 0;
    D_0035FD70 = 0;
    func_0017D910();
    if (D_0036029C) {
        D_0035FD60 = 1;
        D_0035FD70 = func_0016BE80(D_00360294);
        func_00167A70(255.0f);
        for (j = 0; j < D_0036029C; j++) {
            if (D_006180E0[j]) {
                func_0017D970(&D_00618180[j], D_00360294, arg0, 1, 1.0f, 1.0f);
            }
        }
        func_0017D910();
    }
    D_0035FD60 = 0;
    D_0035FD70 = 0;
    if (!D_00360210) {
        func_00258BC0(arg0);
        func_0017E9E0();
        return;
    }
    temp = func_00167A50();
    D_0036022C = 0;
    D_0035FAD4 = 1;
    D_00360228 = 1;
    if (D_00360210) {
        k = 0;
        for (n = 0; n < D_00360210; n++) {
            D_00633320[n].unk_80 = 0;
        }
        do {
            s2 = -1;
            s6 = D_00633320[k].unk_7C;
            func_0017D910();
            D_0035FD70 = s6;
            D_0035FD60 = 1;
            m = k;
            offset = (s32)k * (s32)sizeof(unk_func_00265210_2);
            for (; m < D_00360210; offset += sizeof(unk_func_00265210_2), m++) {
                p = (unk_func_00265210_2 *)((u8 *)D_00633320 + offset);
                v1 = p->unk_7C;
                if (v1 == s6) {
                    func_00263A90(m, arg0);
                    p->unk_80 = 1;
                } else if (s2 == -1 && p->unk_80 == 0) {
                    s2 = v1;
                    k = m;
                }
            }
        } while (s2 != -1);
    }
    func_0017D910();
    D_0035FD60 = 0;
    D_0035FD70 = 0;
    D_0035FAD4 = 0;
    D_0036022C = 0;
    func_00258BC0(arg0);
    D_00360228 = 0;
    D_0036022C = 0;
    func_00167A70(temp);
    D_0035F5AC = 0;
    func_0017E9E0();
}
