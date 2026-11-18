#include "common.h"

extern "C" {
extern u8 D_0035E530[];
extern u8 D_0035ED80[];
void func_00304B00(void *);
}

namespace std {
class exception {
public:
    void *unk_00;
    ~exception() { unk_00 = D_0035E530; }
    static void operator delete(void *p) { func_00304B00(p); }
};

class bad_exception : public exception {
public:
    ~bad_exception();
};
}

std::bad_exception::~bad_exception() {
    unk_00 = D_0035ED80;
}
