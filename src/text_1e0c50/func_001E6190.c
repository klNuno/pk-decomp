/* profile: opt_300 */
#include "common.h"

char *strcpy(char *, const char *);

char *func_001E6190(char *arg0, const char *arg1) {
    char *temp = arg0;

    while (*arg0 != 0) {
        arg0++;
    }
    strcpy(arg0, arg1);
    return temp;
}
