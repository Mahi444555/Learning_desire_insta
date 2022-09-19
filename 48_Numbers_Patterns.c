/*Program to print the following number pattern
1                       //here we are printing row number i.e. i'th value till i'th line i.e. line number
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include<stdio.h>
#include<conio.h>
void  main()
{
    int n,i,j;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   //for print no of lines/rows
    {
        for(j=1;j<=i;j++)   //j'th loop only iterates still line no i.e. i'th value
        {
            printf("%d ",i);
        }
        printf("\n");       //after each iteration print new line
    }
    getch();
}
