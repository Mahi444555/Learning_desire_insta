/*program to print the following outputsupper-case : A B C D E ...Z    ascci value is : 65-90lower-case : a b c d e f......z                          : 97-122
digits          : 0 1 2 3 ...9                                :48-57
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
printf("upper-case letters: \n");
    for(i=65;i<=90;i++)
    {
        printf("%c \t",i);
    }
printf("\n lower-case letters: \n");
    for(i=97;i<=122;i++)
    {
        printf("%c \t",i);
    }
printf("\n Digits: \n");
    for(i=48;i<=57;i++)
    {
        printf("%c \t",i);
    }
    getch();
}
