/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0019A2F0_0 {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0019A2F0_0;

extern s32 D_003338D0[];
extern s32 *D_003338D8[];
extern char D_00349ED8[];
extern u8 D_0035F528;
extern s32 D_0035F538;
extern s32 D_0035FEBC;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
unk_func_0019A2F0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0012DCA0(s32);
void func_0012DDD0(s32);
void func_0012E1E0(s32);
void func_00176740(s32);
s32 func_001971C0(s32);
s32 func_001971E0(s32);
s32 func_00197CC0(s32);
void func_00199760(s32, s32);
void func_00199790(s32, s32);
void func_001997C0(s32, s32);
s32 func_00199810(s32, s32);
s32 func_00199890(s32);
s32 func_0019A610(s32);
void func_0019CA60(u8 *);
void func_001A2AD0(s32);
void func_001AE890(s32);
void func_001B7D60(s32);
void func_001BE3F0(s32);
void func_001C5310(unk_func_0019A2F0_0 *);
void func_001C5E80(s32, unk_func_0019A2F0_0 *);
void func_002D4F30(s32, s32);
void *memset(void *, s32, u32);

void func_0019A2F0(s32 arg0)
{
    s32 node;
    unk_func_0019A2F0_0 *object;
    s32 temp;
    s32 next;
    s32 copy;
    s32 i;
    s32 index;
    s32 first;

    D_0035FEBC--;
    index = (arg0 - 0x8000) - 0x8000;
    temp = func_00199810(D_003338D0[0], index);
    func_00176740(temp);
    func_001AE890(temp);
    func_002D4F30(temp, D_0035F538);
    object = HIE_fn_hGetSuperObjectObject(temp);
    if (func_00199890(object->unk_04) == -1) {
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x48, -1, 0, 0, 0, D_00349ED8, 0x2E6);
        Erm_fn_ClearLastError(0, D_00349ED8, 0x2E6);
    }

    D_003338D8[0][index] = 0;
    func_001BE3F0(temp);
    func_001997C0(object->unk_04, -1);
    func_00199790(object->unk_04, -1);
    func_00199760(object->unk_04, 0x10000);
    func_001C5E80(temp, HIE_fn_hGetSuperObjectObject(temp));
    func_0019CA60(object->unk_00 + 0xD4);
    func_001C5310(object);
    if (object->unk_08 != 0) {
        func_001B7D60(object->unk_08);
    }
    func_0012DDD0(temp);
    if (func_00197CC0(HIE_fn_hGetSuperObjectObject(temp)->unk_04) != 0) {
        i = 0;
        node = func_001971E0(temp);
        first = next = func_0012DCA0(node);
        while (node != 0) {
            if (func_001971C0(node) == 2) {
                func_001A2AD0(node);
            }
            i++;
            node = next;
            copy = next = func_0012DCA0(node);
            (void)copy;
        }
    }
    if (func_0019A610(temp) != 0) {
        func_0012E1E0(temp);
    }
    memset(object, 0, 0x2C);
}
