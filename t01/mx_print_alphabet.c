void mx_printchar(char c);

void  mx_print_alphabet() {
    for (int i = 0; i < 26; i++) {
        if (i % 2) {
            // print small
            mx_printchar('a' + i);
        } else {
            // print capital
            mx_printchar('A' + i);
        }
    }
    mx_printchar('\n');
}
