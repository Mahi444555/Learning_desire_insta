//program for the if else statement find the largest of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    int n1, n2, result;         //declaration
    printf("enter the any two numbers: ");
    scanf("%d %d",&n1,&n2);

    if(n1 >= n2)               //here used >= 'greater than equal' to i.e. if both are same still n1 is greater
    {
        printf("n1: %d is greater than n2 : %d",n1,n2);
    }
    else
    {
        printf("n2: %d is greater than n1: %d", n2,n1);
    }
    getch();
}
