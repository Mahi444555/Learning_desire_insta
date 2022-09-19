//print the following pattern
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("%c",201);
    for(i=2;i<=39;i++)      //for first horizontal line
        printf("%c",205);
        printf("%c",187);
        printf("\n");
    for(i=2;i<=15;i++)      //i=lines no then 2nd line till 25th vertically
    {
        printf("%c",186);    //before start of each line
        for(j=2;j<=39;j++)  //j=columns then horizontal spaces only
            printf(" ");
            printf("%c",186);    //and end of each line print one star
        printf("\n");
    }
    printf("%c",200);
    for(i=2;i<=39;i++)
        printf("%c",205);
        printf("%c",188);
    getch();
}

