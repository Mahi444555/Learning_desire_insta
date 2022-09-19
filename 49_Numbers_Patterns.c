/*program to print the following patterns
1
1 1
1 2 1
1 2 3 1
1 2 3 4 1
1 2 3 4 5 1
*/
#include<stdio.h>
#include<conio.h>
void  main()
{
    int n,i,j;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)   //for print no of lines/rows
    {
        for(j=1;j<=i;j++)   //j'th loop only iterates still line no i.e. i'th value
        {
            printf("%d ",j);
        }
        printf("1\n");       //after each iteration print new line
    }
    getch();
}
