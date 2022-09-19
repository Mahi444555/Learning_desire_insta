//program for the Strong number
#include<stdio.h>
#include<conio.h>
void main()
{
    int num, rem, sum=0,temp;
    printf("enter the number: ");
    scanf("%d",&num);

    temp = num;
    while(num > 0)
    {
        rem = num % 10;
        int i = 1;
        int fact=1;
        while(i <= rem)
        {
            fact =fact * i;
            i++;
        }
        printf("%d\t",fact);
        sum = sum + fact;
        num = num/10;
    }
    if(temp == sum)
        printf("Yes, it's strong number...");
    else
        printf("No, it's not strong number...");
getch();
}
