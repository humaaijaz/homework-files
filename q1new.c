#include <stdio.h>

int main() {
    int x;
    printf("enter the value to be shifted");
    scanf("%d",&x);
    int shift_amount = 2;

    int result = x << shift_amount;

    printf("Number before left shift: %d\n", x);
    printf("Number after left shift by %d positions: %d\n", shift_amount, result);

    return 0;
}
