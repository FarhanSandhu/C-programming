#include <stdio.h>

// Define a struct to represent a student
struct Struct_pointers {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    // Declare a struct variable
    struct Struct_pointers student;

    // Declare a struct pointer
    struct Struct_pointers *ptr;

    // Assign the address of the struct variable to the pointer
    ptr = &student;

    // Access struct members using the pointer
    printf("Enter Roll Number: ");
    scanf("%d", &(student.rollNumber));

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Age: ");
    scanf("%d", &(ptr->age));

    // Print the student details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    return 0;
}