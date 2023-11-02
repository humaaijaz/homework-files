#include <stdio.h>

int main() {
    int num[5], i, smallest;

    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    smallest = num[0];

    for(i = 1; i < 5; i++) {
        if(num[i] < smallest) {
            smallest = num[i];
        }
    }

    printf("The smallest number is: %d", smallest);

    return 0;
}
