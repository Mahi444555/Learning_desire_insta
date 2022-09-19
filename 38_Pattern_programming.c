/*program to print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;  //where n=input number, i=row, j=columns
    int clrscr();
    printf("enter the n: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)   //these is outer loop for number of lines/rows to print
    {                               //if n=2 then 0<=2 true
        for(j=0;j<=n;j++)   //inner loop for print columns in that columns we print *
        {                               //   0<=2 true then print (* ) j++= 1 thne 1<=2 true: print (* * ) again j++=2, 2<=2 true
            printf("* ");
        }
        printf("\n");           //after each row we change the line.
    }
    getch();
}
