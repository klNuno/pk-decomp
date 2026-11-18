#include "common.h"

typedef struct unk_func_002D8EB0_1 {
    u8 pad_00[0x4];
    struct unk_func_002D8EB0_1 *unk_04;
    struct unk_func_002D8EB0_3 *unk_08;
} unk_func_002D8EB0_1;

typedef struct unk_func_002D8EB0_0 {
    unk_func_002D8EB0_1 *unk_00[1];
} unk_func_002D8EB0_0;

typedef struct unk_func_002D8EB0_2 {
    u8 pad_00[0x10];
} unk_func_002D8EB0_2;

typedef struct unk_func_002D8EB0_4 {
    s32 unk_00;
    s32 unk_04;
    bool operator==(const unk_func_002D8EB0_4 &o) const {
        return unk_00 == o.unk_00 && unk_04 == o.unk_04;
    }
} unk_func_002D8EB0_4;

typedef struct unk_func_002D8EB0_5 {
    u8 pad_00[4];
    unk_func_002D8EB0_4 unk_04;
} unk_func_002D8EB0_5;

class unk_func_002D8EB0_3 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(...);
};

class unk_func_002D8EB0_6 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18(...);
};

extern "C" {

unk_func_002D8EB0_1 *func_002CF800(void *);
void func_002CF7F0(unk_func_002D8EB0_0 *, unk_func_002D8EB0_1 *);
void func_002CF7E0(unk_func_002D8EB0_0 *, unk_func_002D8EB0_1 *);
void func_002CFED0(unk_func_002D8EB0_2 *);
void func_002CF5C0(unk_func_002D8EB0_2 *, s32);
unk_func_002D8EB0_6 *func_002EFFF0(s32);
unk_func_002D8EB0_5 *func_002F2390(unk_func_002D8EB0_3 *);

bool func_002D8EB0(s32 *arg0, s32 arg1, unk_func_002D8EB0_4 *arg2) {
    bool found;
    unk_func_002D8EB0_2 list;
    unk_func_002D8EB0_0 it;
    unk_func_002D8EB0_0 temp1;
    unk_func_002D8EB0_0 temp4;
    unk_func_002D8EB0_0 temp8;
    unk_func_002D8EB0_3 *obj;

    found = false;
    func_002CFED0(&list);
    func_002EFFF0(arg0[3])->unk_vf18(&list);
    func_002CF7F0(&temp4, func_002CF800(&list)->unk_04);
    temp1.unk_00[0] = temp4.unk_00[0];
    it = temp1;
    while (func_002CF7E0(&temp8, func_002CF800(&list)), it.unk_00[0] != temp8.unk_00[0]) {
        obj = it.unk_00[0]->unk_08;
        {
            const unk_func_002D8EB0_4 &key = func_002F2390(obj)->unk_04;
            if (*arg2 == key) {
            obj->unk_vf0C(arg1, 0);
            found = true;
                break;
            }
        }
        it.unk_00[0] = it.unk_00[0]->unk_04;
    }
    func_002CF5C0(&list, 0);
    return found;
}

}
