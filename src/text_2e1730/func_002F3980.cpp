#include "common.h"

typedef struct {
    s32 unk_00;
    u8 unk_04[0xC];
} unk_func_002F3980_0;

typedef struct unk_func_002F3980_1 {
    struct unk_func_002F3980_1 *unk_00;
    struct unk_func_002F3980_1 *unk_04;
    u32 unk_08;
    unk_func_002F3980_0 unk_0C;

    bool unk_1C() const { return (unk_08 & 1) != 0; }
} unk_func_002F3980_1;

extern "C" unk_func_002F3980_1 *func_002D2BC0(s32);
extern "C" void func_002F11C0(void *, const void *);

#define COPY_VALUE(dst, src)                                                    \
    do {                                                                        \
        unk_func_002F3980_0 *unk_0C = &(dst)->unk_0C;                           \
        if (unk_0C != 0) {                                                      \
            unk_0C->unk_00 = (src)->unk_0C.unk_00;                              \
            func_002F11C0(unk_0C->unk_04, (src)->unk_0C.unk_04);                \
        }                                                                       \
        if ((src)->unk_1C() != false) {                                         \
            (dst)->unk_08 |= 1;                                                 \
        } else {                                                                \
            (dst)->unk_08 &= ~1U;                                               \
        }                                                                       \
    } while (0)

#define COPY_CHILD(dst, src, member)                                            \
    do {                                                                        \
        unk_func_002F3980_1 *temp = (src)->member;                              \
        if (temp != 0) {                                                        \
            (dst)->member = func_002F3980(arg0, temp);                          \
            (dst)->member->unk_08 = (u32)(dst) | ((dst)->member->unk_08 & 1);   \
        }                                                                       \
    } while (0)

#define COPY_CHILDREN(dst, src, member)                                         \
    do {                                                                        \
        unk_func_002F3980_1 *unk_04;                                            \
        unk_func_002F3980_1 *unk_00 = (src)->member;                            \
        if (unk_00 != 0) {                                                      \
            unk_04 = func_002D2BC0(sizeof(*unk_04));                            \
            unk_04->unk_04 = 0;                                                 \
            unk_04->unk_00 = 0;                                                 \
            COPY_CHILD(unk_04, unk_00, unk_00);                                 \
            COPY_CHILD(unk_04, unk_00, unk_04);                                 \
            COPY_VALUE(unk_04, unk_00);                                         \
            (dst)->member = unk_04;                                             \
            (dst)->member->unk_08 = (u32)(dst) | ((dst)->member->unk_08 & 1);   \
        }                                                                       \
    } while (0)

extern "C" unk_func_002F3980_1 *func_002F3980(void *arg0, const unk_func_002F3980_1 *arg1) {
    unk_func_002F3980_1 *temp = func_002D2BC0(sizeof(*temp));

    temp->unk_04 = 0;
    temp->unk_00 = 0;
    COPY_CHILDREN(temp, arg1, unk_00);
    COPY_CHILDREN(temp, arg1, unk_04);
    COPY_VALUE(temp, arg1);
    return temp;
}
