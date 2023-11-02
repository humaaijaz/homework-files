#include <stdio.h>

int main() {
    int sum = 0;
    int sum_of_squares = 0;

    for (int i = 1; i <= 5; i++) {
        sum += i;
        sum_of_squares += i * i;
    }

    printf("The sum of the first five numbers is %d and the sum of their squares is %d.\n", sum, sum_of_squares);
    return 0;
}


