#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 5;
    int* numbers = (int*)malloc(size * sizeof(int));
    
    // Taking 5 number inputs
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Printing the addresses of the entered numbers
    printf("\nAddresses of the entered numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("%d: %d\n", numbers[i], (numbers+i));
    
    
    // Extending the allocated memory to accommodate 10 numbers
    int newSize = 10;
    numbers = (int*)realloc(numbers, newSize * sizeof(int));
    
    // Taking additional 5 number inputs
    printf("\nEnter 5 more numbers:\n");
    for (int i = size; i < newSize; i++) {
        scanf("%d", &numbers[i]);
    }
    
    // Printing the addresses of all 10 numbers
    printf("\nAddresses of all 10 numbers:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d: %d\n", numbers[i], numbers+i);
    }
    
    // Freeing the allocated memory
    free(numbers);
    
    return 0;
}
}