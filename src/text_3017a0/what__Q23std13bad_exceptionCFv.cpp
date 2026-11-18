#include "common.h"

extern "C" {
extern char D_0035CE68[];
}

namespace std {
class bad_exception {
public:
    const char *what() const;
};
}

const char *std::bad_exception::what() const {
    return D_0035CE68;
}
