/*program to print the following alphabet pattern
A                           //now we are printing alphabets having computer ASCII code or value
A B                         //Capital A-Z  65 - 90
A B C                       //small a-z   97 - 122
A B C D                     //digits 0-9   48 to 57
A B C D E
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("enter the number of lines n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   //i.e. i=1; i<=5;i++   whatever n's value it will print till that lines
    {
        for(j=1;j<=i;j++)   //now here jth loop will iterates till ith  i.e. line number
        {
            printf("%c ",j+64);         //here only change formatSpecifier i.e. %c char 1+64 =65 in Ascci is A
        }
        printf("\n");
    }
getch();
}
