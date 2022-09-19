/* program for to print the following pattern
            *
         * * *
      * * * * *
   * * * * * * *
 * * * * * * * * *
   * * * * * * *
    * * * * *
      * * *
        *
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)   //to print number of lines
    {
        for(k=0;k<n-i;k++) //to print spaces
        {
            printf("  ");
        }
        for(j=0;j<=i-1;j++)       //to print *     these is first pyramid after spaces
        {
            printf("* ");
        }
        for(j=2;j<=i;j++)           //these is second pyramid i.e. iterates still line no
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)       //these loop is for printing no of lines    here we prining new
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

