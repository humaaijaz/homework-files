#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<=100;i++) {
        if(i%2 !=0 && i%3 !=0 && i%5 !=0) {
            count++;

        }
        
        
    }
    printf("%d\n", count);
    return 0;
}

