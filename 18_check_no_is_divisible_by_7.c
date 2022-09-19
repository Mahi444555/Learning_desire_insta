//check no is multiple of 7 or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    int no;
    printf("enter the number: ");
    scanf("%d",&no);
    if(no%7 == 0)       //if any number if we divide by 7 and give's remainder zero then
    {                                   //it's multiple of 7
        printf(" Yes number is multiple of 7");
    }
    else
    {
        printf("No number is not multiple of 7");
    }
    getch();
}
