/*program to find prime number: eg: 5,7,11,...,etc.
    so, number which divisible by only 1 and itself eg: 5 : 5%1=0=0 , and 5%5==0 and all other numbers between 2 to 5-1=4
    if we divide 5 by them they will not gives or not completely divide by hence 5 is prime number....
    so, logic is n=5 then start divide by 2 to n-1 range for any number...
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++)     //n=5  2<=5-1 i.e. 2<=4
    {
        if(n%i==0)
        {
            printf("Not,prime it's divisible by other number");
            break;      //so here break used once the condition is true i.e. no is not prime then no need for check next
        }
    }
    if(n==i)                                //if i'th iteration will increase till nth no then it's automatically prime
        printf("Yes, its prime number");
getch();
}
