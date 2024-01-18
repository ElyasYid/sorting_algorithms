#include <stdio.h>

void swapper(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(const int *array, size_t size) {
    size_t i;

    i = 0;
    while (array && i < size) {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

void bubble_sort(int *array, size_t size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swapper(&array[j], &array[j + 1]);
            }
        }
        print_array(array, size);
    }
}

int main(void) {
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return 0;
}

