#include <stdio.h>
#define SIZE 10   // Size of the array
int main(){
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int *ptr;   // Pointer to the array elements
    int i;

    // Assign the address of the first element to the pointer
    ptr = arr;
    printf("%x\n",ptr);
    printf("%x\n",arr);
    printf("%x",&arr);

    // Print the array using pointer
    printf("\nArray elements:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(ptr + i));  // Accessing array elements using pointer arithmetic
    }
    printf("\n");

    return 0;
    // int *c1=&c;
    // // *c1=5;
    // printf("%d\n",*c1);
    // printf("%x\n",&c);
    // printf("%x\n",c1);
    // printf("%x",&c1);
    // return 0;
}
