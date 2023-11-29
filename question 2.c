//program to check for even or odd using bitwise operators;
#include<stdio.h>
int main(){

    int x;
    printf("enter a number to be checked  :");
    scanf("%d",&x);

    (x&1)? printf("odd"):printf("even");
    return 0;

}    
