//program for the check number is odd or even number
//logic : where even no are divisible by 2 and give's remainder 'zero'
//        : where odd no are not divisible by 2 and give's remainder equal to '1'
#include<stdio.h>
#include<conio.h>
void main()
{

    int clrscr();
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num%2 == 0)              //where % modulus operator always gives remainder eg: 10%2= 0
    {                                      //where  / division operator always gives quotient part i,e, 10/2 = 5
        printf("number is divisible by 2 and it's even ");
    }
    else
    {
        printf("number is not divisible by 2 and it's odd ");
    }
    getch();
}
