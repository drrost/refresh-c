void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void sort_arguments(int argc, char *argv[]);
void print_arguments(int argc, char *argv[]);

int main(int argc, char *argv[]) {
    argv++;
    argc--;

    sort_arguments(argc, argv);
    print_arguments(argc, argv);

    return 0;
}

void swap(char **s1, char **s2) {
    char *stemp = *s1;
    *s1 = *s2;
    *s2 = stemp;
}

void sort_arguments(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        for (int j = i; j < argc; j++) {
            if (mx_strcmp(argv[i], argv[j]) > 0) {
                swap(&(argv[i]), &(argv[j]));
            }
        }
    }
}

void print_arguments(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printstr("\n");
    }
}
