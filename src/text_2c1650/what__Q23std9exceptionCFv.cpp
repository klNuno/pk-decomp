#include "common.h"

extern "C" {
extern char D_0035B318[];
}

namespace std {
class exception {
public:
    const char *what() const;
};
}

const char *std::exception::what() const {
    return D_0035B318;
}
