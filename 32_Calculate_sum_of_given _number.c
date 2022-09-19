//Calculate the sum of given number...
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,sum=0,rem;
    int clrscr();
    printf("enter the value of n: ");
    scanf("%d",&n);
    while(n> 0)     //1<= 100, 1<=10 ,  1>=1 true, but now n's value is 0.10 but after zero it dosen't count : 0>0 false
    {
        rem = n% 10;    //gives remainder  eg: 100 % 10 = 0 ,  10%10 = 0 , 1%10 = 1
        sum = sum+ rem;     //adding last digit of number where we stored in rem into sum : 0 +0 = 0, 0+0 = 0 ,0+1=1
        n = n/10;       // decrease number until it's get less then zero or removing last digit  100/10 = 10, 10/10 =1, 1/10 0.10..
    }
    printf("sum= %d",sum);
getch();
}
