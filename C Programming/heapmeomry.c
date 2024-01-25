#include <stdio.h>
#include <stdlib.h>
// usage of the malloc and calloc and free commands
int main(){
    int*ptr;
    int i;
    // ptr=(int*)malloc(50*sizeof(int));
    ptr=(int*)calloc(50,sizeof(int));
    // get element of the array
//     for(i=0;i<50;i++){
//         ptr[i]=i+1;
//    }
    for(i=0;i<50;i++){
        printf("%d\n",*(ptr+i));
   }
    // free(ptr);
    return 0;
}

