/* profile: opt_300 */
#include "common.h"

char *func_001E61E0(char *arg0, char arg1) {
    char *start;

    start = arg0;
    while (*arg0++) {
    }
    while (--arg0 != start && *arg0 != arg1) {
    }
    if (*arg0 == arg1) {
        return arg0;
    }
    return NULL;
}
