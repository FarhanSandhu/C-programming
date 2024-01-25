//Arrays Class 
#include <stdio.h>
#define MAX_SIZE 10   // Maximum size of matrices

int main() {
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    int i, j, k;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of matrix 1:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of matrix 2:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if matrices can be multiplied
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }

    // Multiply the matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;

            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result
    printf("Resultant matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    // int array[100]; 
    // for(int i=0;i<100;i++){
    //     array[i]=i*100;
    //     printf("array value at %d is; %d \n",i,array[i]);
    // }
//     array[50]=4000;
//     printf("%d",array[50]);

    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Accessing and printing the elements of the array
    // int arr1[4][4];
    // int arr2[4][4];
    // int arr3[4][4];

    // // Taking input for each element of the array
    // printf("Enter the elements of the first  array:\n");
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         printf("Enter element at position (%d, %d): ", i, j);
    //         scanf("%d", &arr1[i][j]);
    //         printf("Enter element at position (%d, %d): ", i, j);
    //         scanf("%d", &arr2[i][j]);
    //     }
    // }
    
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         arr3[i][j]=arr2[i][j]+arr1[i][j];
    //     }
    // }
    // // Printing the elements of the array
    // printf("\nThe sum of array is:\n");
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         printf("%d ", arr3[i][j]);
    //     }
    //     printf("\n");
    













    
    


