
void swap(int *a, int *b);

void mx_sort_arr_int(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(&(arr[i]), &(arr[j]));
            }
        }
    }
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
