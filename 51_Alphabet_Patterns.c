/*program to print the following pattern
                A               //here we have to firstly print spaces pattern then alphabet half part then second part
            B  B  B
        C C  C  C C
    D D  D  D D D D
E E  E  E  E  E E E E

*/
#include<stdio.h>
#include<conio.h>
int main()
{
int  n,i,j,k;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=(n-i);k++)   //to print spaces
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+i);
        }
        for(j=2;j<=i;j++)           //from here printing 2nd half of pattern
        {
            printf("%c ",64+i);
        }
        printf("\n");
    }
    getch();
}
