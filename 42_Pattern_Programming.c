/*programming to print following pattern
            *                       _ _ _ _ *
         * *                        _ _ _ * *
      * * *                         _ _ * * *
   * * * *                          _ * * * *
* * * * *                           * * * * *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   //to print number of lines
    {
        for(k=1;k<=n-i;k++) //to print spaces
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)       //to print *
        {
            printf("* ");
        }
        printf("\n");
    }
}
