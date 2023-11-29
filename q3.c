#include<stdio.h>
void main(){

    float i,f;
    printf("enter the meter reading at start of month");
    scanf("%f",&i);
    printf("enter the meter reading for the end of the month ");
    scanf("%f",&f);

    int x=f-i;

    if(x<100)
    {
        printf("your bill is for this month is %f",x*1.50);
    }
    else if(x>=200&&x<=500)
    {
        printf("your bill for this month is %f",x*3.5);
    }
    else if(x>=100&&x<=200)
    {
        printf("your bill for this month is%f",x*2.5);
    }
    else{
        printf("bhai ye ghr ka bill ha ya parliament ka");
    }
}