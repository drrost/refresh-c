void mx_printchar(char c);

void do_print(int n);

void mx_printint(int n) {
    if (n < 0) {
        mx_printchar('-');
        n = -n;
    }
    do_print(n);
}

void do_print(int n) {
    if (n > 9) {
        do_print(n / 10);
    }
    mx_printchar('0' + n % 10);
}
