#include <stdio.h>

#define SIZE 5   // Size of the array

void printArray(int *arr, int size) {
    int i;

    printf("Array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Accessing array elements using pointer arithmetic
    }
    printf("\n");
}

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};

    // Pass the array and its size to the printArray function
    printArray(arr, SIZE);

    return 0;
}
