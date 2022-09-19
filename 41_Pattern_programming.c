/*Program to print following pattern
*  *  *  *  *
_ *  *  *  *            //where these   '_' underline i.e. spaces to be print then we have to print stars there is two pyramid
_ _ *  *  *
_ _ _ *  *
_ _ _ _ *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    int clrscr();
    printf("enter the n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)       //print number of liens rows
    {
        for(k=1;k<i;k++)   //print spaces till i
        {
            printf("  ");
        }
        for(j=i;j<=n;j++)       //for print stars pattern i.e. columns
        {
            printf("* ");
        }
        printf("\n");           //new line
    }
getch();
}
