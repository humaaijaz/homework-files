//wap to convert uppercase to lowercase letetr by using bitwise operator
#include<stdio.h>
int main()
{
 char alphabet;
 printf("Enter the uppercase letter : ");
 scanf("%c",&alphabet);
 if(alphabet>= 'A' && alphabet <= 'Z'){
    alphabet = alphabet | 32;
    printf("The lowercase letter is : %c\n",alphabet);
 }else {
    printf("Uppercase letter is not entered.");
 }
 return 0;
}