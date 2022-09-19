/*program to print following pattern
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    int clrscr();
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)   //here inner loop will be iterate till each line_no row_number  i.e. j is run till i
        {
            printf("* ");
        }
        printf("\n");
    }
getch();
}
