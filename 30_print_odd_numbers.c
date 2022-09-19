/*program to print first n odd numbers:
where : odd numbers are nothing but which can't be divide by 2 or remainder gives as 1 eg: 1,3,5,
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n;
    int clrscr();
    printf("enter the value of n: ");
    scanf("%d",&n);
while(i<=n)
    {
/*first logic:
        if(i% 2 != 0)
            printf("%d \t",i);
        i++;
*/
//second logic:
    printf("%d \t",i);
    i=i+2;
    }
getch();
}
