/*print the following pattern
************************************************************
*                                                                                                *
*                                                                                                *
************************************************************
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=40;i++)      //for first horizontal line
        printf("*");
        printf("\n");
    for(i=2;i<=15;i++)      //i=lines no then 2nd line till 25th vertically
    {
        printf("*");    //before start of each line
        for(j=2;j<=39;j++)  //j=columns then horizontal spaces only
            printf(" ");
            printf("*");    //and end of each line print one star
        printf("\n");
    }
    for(i=1;i<=40;i++)
        printf("*");
    getch();
}
