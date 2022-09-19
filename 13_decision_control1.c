//program for the decision control structure (if-statement)
#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    int n1, n2, result;
    printf("enter the n1 and n2 \n:");
    scanf("%d %d",&n1,&n2);

    if(n1 > n2)                                    //only for if-statement_program
    {
        printf("n1: %d is greater than n2 : %d",n1,n2);
    }
    getch();
}
