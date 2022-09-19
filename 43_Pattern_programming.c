/* program to print following pattern
            *
         * * *
      * * * * *
   * * * * * * *
* * * * * * * * *

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
}
