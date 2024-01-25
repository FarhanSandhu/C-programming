#include <stdio.h>

#define MAX_STUDENTS 30
#define MAX_NAME_LENGTH 20

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH + 1];

    printf("Enter the names of the students:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: ", i + 1);

        // Read the name character by character
        for (int j = 0; j < MAX_NAME_LENGTH; j++) {
            names[i][j] = getchar();
            if (names[i][j] == '\n') {
                names[i][j] = '\0';
                break;
            }
        }

        // Clear the input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
    }

    printf("\nThe names of the students are:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
