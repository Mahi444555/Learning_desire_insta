/*program for the print even number using while loop (important )
where even numbers are those numbers which are divisible by 2  or aways gives
remainder as "zero"
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n, i=2;                      //for 1st logic i = 1 and 2nd logic i = 2
 printf("enter the value of n: ");
 scanf("%d",&n);
 while(i<=n)
 {
/* 1st logic :
            if(i % 2 ==0 )             //where "%" modulus operator
            printf("%d \t", i);
            i++;
*/
        printf("%d \t",i);
        i=i+2;
 }
 getch();
}
