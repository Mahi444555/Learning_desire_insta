/*program to print the following pattern
A B C D E D C B A
A B C D    D C B A
A B C           C B A
A B                  B A
A                         A
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)   //here we printing decreasing pattern so assign directly i with n
    {
        for(j=1;j<=i;j++)
            printf("%c ",64+j);

        for(k=1; k<=n-i;k++)
            printf("  ");

          for(k=1; k<=n-i;k++)
            printf("  ");

        for(j=i;j>=1;j--)
            printf("%c ",64+j);

        printf("\n");

    }
    getch();
}
