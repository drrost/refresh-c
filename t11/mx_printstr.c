#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    int n = mx_strlen(s);
    write(STDOUT_FILENO, s, n);
}
