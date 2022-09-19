//program to print table of given numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    int clrscr();
    printf("enter the value of n: ");
    scanf("%d",&n);
    for( i=1;i<=10;i++)
    {
        printf("%d  *  %d = %d\n",n,i,i*n);
    }
getch();
}
