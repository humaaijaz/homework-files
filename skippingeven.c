#include <stdio.h>

int main()
 {
    int i = 1; 

    printf("Numbers from 1 to 20 (skipping even numbers):\n");

    while (i <= 20) {
        if (i % 2 != 0)
         { 
            printf("%d ", i); 
         }
        i++;
    }

    return 0;
}
