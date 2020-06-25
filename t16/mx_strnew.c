#include <stdlib.h>

char *mx_strnew(const int size) {
    if (size < 0) {
        return 0;
    }
    return malloc(sizeof(char) * (size + 1));
}
