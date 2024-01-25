#include <stdio.h>
#define MAX_SIZE 3
void  multiplyMatrix (int matrix1[MAX_SIZE][MAX_SIZE],int matrix2[MAX_SIZE][MAX_SIZE],int rows1, int cols1, int rows2, int cols2)
{
    int i, j, k;
    int result[MAX_SIZE][MAX_SIZE];
     if (cols1 != rows2) {
        printf("Matrices cannot be multiplied!\n");    
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

}
int main(){
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];

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

    multiplyMatrix( matrix1, matrix2 , rows1, cols1, rows2, cols2);
    
    return 0;
}