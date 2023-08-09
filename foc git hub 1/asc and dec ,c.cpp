 #include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    qsort(array, size, sizeof(int), compare);

    printf("Array in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
