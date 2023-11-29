#include <stdio.h>

int main() {
    int class[10];
    printf("Enter the roll numbers of 10 students:\n");
    for(int i = 0; i < 10; i++) {
        printf("Enter roll number for student %d: ", i+1);
        scanf("%d", &class[i]);
    }
    printf("\nRoll numbers of all students:\n");
    for(int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i+1, class[i]);
    }
    printf("\n8th student's roll number: %d\n", class[7]);
    printf("5th student's roll number: %d\n", class[4]);
    return 0;
}
