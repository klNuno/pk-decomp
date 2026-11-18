/* profile: opt_300 */
#include "common.h"

void func_001000F0();
void func_0011B418();
void func_0011CBB0();
void func_00129AA0();
void func_00129B40();
void func_00129B50();
void func_00129B60();
s32 func_001336B0();
void func_00164450();
void func_001644A0();
s32 func_00169AD0();
void func_00172C50();
void func_001DB950();
void func_00129A90();
extern char D_00345490[];
extern char D_003454A8[];
extern char D_003454B8[];
extern char D_003454D0[];
extern char D_003454F0[];
extern char D_00345500[];
extern char D_00345510[];
extern char D_00345520[];
extern char D_00345530[];
extern char D_00345550[];
extern char D_00345570[];
extern char D_00345580[];
extern char D_00345588[];
extern char D_00345598[];
extern char D_003455A8[];
extern char D_003455B0[];
extern char D_0035F324[];
extern s32 D_0035F81C;
extern char D_00363190[];
extern char D_00363210[];

s32 main(void) {
    u8 sp10[0x60];

    func_001000F0();
    func_0011CBB0(D_00363190, D_00345490, 13246.5126953125f);
    func_0011CBB0(D_00363210, D_003454A8, D_00363190, 13246.5126953125f);
    func_0011CBB0(D_00363190, D_00345490, 13246.5126953125f);
    func_0011CBB0(D_00363210, D_003454B8, D_00363190, 13246.5126953125f);
    func_0011CBB0(D_00363190, D_00345490, 13246.5126953125f);
    func_0011CBB0(D_00363210, D_003454D0, D_00363190, 13246457.0f, 13246457.0f);
    func_0011CBB0(D_00363190, D_00345490, 13246.5126953125f);
    func_0011CBB0(D_00363210, D_003454A8, D_00363190, 13246.5126953125f);
    func_001644A0();
    func_00164450(func_00129A90);
    func_00172C50(D_003454F0);
    func_00172C50(D_00345500);
    func_00172C50(D_00345510);
    func_00129B60();
    if (func_001336B0() == 0) {
        func_0011B418(D_00345520);
        func_0011B418(D_00345530, 0x9D);
        func_0011B418(D_00345550);
    loop:
        goto loop;
    }
    func_00172C50(D_00345570);
    func_001DB950(D_00345580);
    func_00172C50(D_00345588);
    func_00129B50();
    func_00172C50(D_00345598);
    if ((func_00169AD0(sp10, &D_0035F81C) ? 1 : 0) == 0) {
        return 0;
    }
    func_00129B40();
    func_0011B418(D_003455A8, D_0035F324);
    func_00172C50(D_003455B0);
    func_00129AA0();
    return 0;
}
