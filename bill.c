#include<stdio.h>
void main()
{
    float i,f;
    printf("Enter the meter reading at start of month");
    scanf("%f",&i);
    printf("Enter the meter reading at the end of the month");
    scanf("%f",&f);
    int x=f-i;
    if(x<100)
    {
        printf("Your bill is %f",x*1.50);
        
    }
    else if(x>=200&&x<=500)
    {
     printf("Your bill is %f",x*3.5);
     
    }
    else if(x>=100&&x<=200)
    {
        printf("Your bill is%f",x*2.5);
    }
    else{
        printf("Your inputs are invalid");
    }
}

