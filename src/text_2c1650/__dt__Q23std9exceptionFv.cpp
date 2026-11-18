#include "common.h"

extern "C" {
extern u8 D_0035E530[];
void func_00304B00(void *);
}

namespace std {
class exception {
public:
    void *unk_00;
    ~exception();
    static void operator delete(void *p) { func_00304B00(p); }
};
}

std::exception::~exception() {
    unk_00 = D_0035E530;
}
