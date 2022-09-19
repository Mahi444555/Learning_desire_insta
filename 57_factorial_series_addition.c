//program to calculate the following series 1/2! + 2/3! + 3/4! + 4/5! + 5/6!..;
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    float fact,sum=0;
    printf("enter the limit of series...");
    scanf("%d",&n);

    for(i=1;i<=n;i++)       //works as denominator number
    {
        fact=1;
        for(j=1;j<=i+1;j++)  //j always greater than ith num and finding factorial here then adding
        {
            fact=fact*j;
            sum=sum + i / fact;
        }
    }
    printf("addition of series : %f", sum);
}
