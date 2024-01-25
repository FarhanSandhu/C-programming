// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     char string[40]; // Assuming the string length will not exceed 20 characters

//     // printf("Enter a string: ");
//     // fgets(string, sizeof(string), stdin);

//     // printf("Entered string: %s", string);
//     // Method 2;
//     printf("Enter a string: ");
//     scanf("%s",string);
//     printf("your string is \n %s",string);
//     printf("your string is \n %d",sizeof(string));
//     printf("your string is \n %d",strlen(string));
//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main() {
//     char arr[20]; // Assuming the input string will not exceed 100 characters
//     int arr1[20],arr2[20];
//     char arr3[20];
//     printf("Enter a string: ");
//     scanf("%s",arr);
//     for (int i=0;i<strlen(arr);i++) {
//         if (arr[i]=="+")
//         {
//             arr1[0]=arr[i-1];
//             arr2[0]=arr[i+1];
//             arr3[0]=arr[i];
//         }
//     }
//     int num1=atof(arr1);  
//     int num2=atof(arr2);  
//     int result;
//     if(arr3[0]=="+"){
//         result=num1+num2;
//     }

    // int result;
//         switch (arr3[0]) {
//             case '+':
//                 result = num1 + num2;
//                 break;
//             case '-':
//                 result = num1 - num2;
//                 break;
//             case '*':
//                 result = num1 * num2;
//                 break;
//             case '/':
//                 if (num2 != 0) {
//                     result = num1 / num2;
//                 } else {
//                     printf("Error: Division by zero is not allowed.\n");
//                     break;
//                 }
//                 break;
//             default:
//                 printf("Error: Invalid operator.\n");
//                 break;
//         }
//         printf("%d",result);
    
// }

