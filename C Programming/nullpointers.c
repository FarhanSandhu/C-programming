#include <stdio.h>
#include <stdlib.h>
//memory leakage,Null pointers ,Dangling pointers and wild pointers these are main problem of using pointers
//memory leakage,is when you assign ponter to other pointer without freeing the previous pointers results in memory leakage
// Null pointers is pointer use for error handling like segmentation error then we check if the ptr is null or not
// Dangling pointers; when we free some ptr then after freeing we aceess it then it will through some garbage value which result in error of our code and it may change behaviour  of our desire code.
// Dangling pointers are those in which we do not assign any adress to the pointers 
    // int *ptr;
    int main(){
    int* numbers = (int*)malloc(3 * sizeof(int));
    free(numbers);
    printf("%d",*numbers);
    return 0;
}
