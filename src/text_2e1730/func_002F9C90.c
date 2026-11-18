#include "common.h"

typedef struct unk_func_002F9C90_0 {
    struct unk_func_002F9C90_0 *unk_00;
    struct unk_func_002F9C90_0 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    u8 unk_10[4];
} unk_func_002F9C90_0;

void c4sdk_malloc();
void func_002CD2A0();
void func_002D2BB0();
void func_002F9ED0();
void func_002F9810();
void func_002F9EE0();

void func_002F9C90(u8 *arg0, unk_func_002F9C90_0 *arg1);

#define LEAF(n) \
    if (n->unk_00) func_002F9C90(arg0, n->unk_00); \
    if (n->unk_04) func_002F9C90(arg0, n->unk_04); \
    func_002F9EE0(arg0); \
    func_002F9810(n->unk_0C, -1); \
    func_002F9ED0(arg0 + 4); \
    func_002D2BB0(n);

#define MID(e) { unk_func_002F9C90_0 *m; if ((m = e) != NULL) { \
    unk_func_002F9C90_0 *n; \
    if ((n = m->unk_00) != NULL) { LEAF(n) } \
    if ((n = m->unk_04) != NULL) { LEAF(n) } \
    { u8 *p = m->unk_0C; if (p) func_002CD2A0(m->unk_10, -1); } \
    func_002D2BB0(m); } }

void func_002F9C90(u8 *arg0, unk_func_002F9C90_0 *arg1) {
    u8 *p;
    MID(arg1->unk_00)
    MID(arg1->unk_04)
    p = arg1->unk_0C;
    if (p) {
        u8 *q = arg1->unk_10;
        if (q) {
            c4sdk_malloc(q, 0);
        }
    }
    func_002D2BB0(arg1);
}
