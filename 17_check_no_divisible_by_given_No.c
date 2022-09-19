//program to check no is divisible by given number or not
//(here we take both num) from user and check 1st is divisible by second or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    int no1, no2;
    printf("enter 1st no to check is divisible or not: ");
    scanf("%d",&no1);
    printf("enter 2nd no to be divide 1st not not: ");
    scanf("%d",&no2);

    if(no1%no2 == 0)
        printf("n1: %d is divisible by n2: %d",no1,no2);

    else
        printf("1st : %d not divisible by 2nd no: %d",no1,no2);

    getch();
}
