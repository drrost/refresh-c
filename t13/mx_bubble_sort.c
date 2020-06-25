int mx_strcmp(const char *s1, const char *s2);
void swap(char **s1, char **s2);

int mx_bubble_sort(char **arr, int size) {
    int swap_count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (mx_strcmp(arr[i], arr[j]) > 0) {
                swap(&(arr[i]), &(arr[j]));
                swap_count++;
            }
        }
    }

    return swap_count;
}

void swap(char **s1, char **s2) {
    char *s_temp = *s1;
    *s1 = *s2;
    *s2 = s_temp;
}
