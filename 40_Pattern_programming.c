/*program for to print following pattern
* * * * *   here we printing decreasing order if n=5 then first line will be 5 starts
* * * *         2nd line 4 stars
* * *           3rd line 3 stars
* *             4rth line 2 stars
*                5th line 1 star        then we directly assign i = n and then decrease i.e. 5 4 3 2 1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    int clrscr();
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
getch();
}
