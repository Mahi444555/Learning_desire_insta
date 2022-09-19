//reverse a given number eg: 123 = 321
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,rem;
    int clrscr();
    printf("enter the value of n: ");
    scanf("%d",&n);
    while(n > 0)
    {
        rem = n%10;             //% modulus operator gives last digit or remainder when we divide it by 10
        printf("%d",rem);
        n = n/10;                   // / division operator gives quotient part only i.e. first number of digit
    }
    getch();

}
