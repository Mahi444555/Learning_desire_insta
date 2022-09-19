/*program to print the following pattern
* * * * *  * * * *       //here first pyramid starting form line no j=i still n
  * * * *  * * *
    * * *  * *
       * * *
         *          */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;        //where n: no of lines, i: rows, j: columns, k: spaces
    printf("enter the number of lines n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)       //these loop is for printing no of lines
    {
        for(k=1;k<i;k++)    //1st pattern for print spaces
            {
                printf("  ");
            }
        for(j=i;j<=n;j++)       //2nd pattern for print *
            {
                printf("* ");
            }
        for(j=1;j<=n-i;j++)         //these loop is for print next half pattern
            {
                printf("* ");
            }
            printf("\n");
    }
}
