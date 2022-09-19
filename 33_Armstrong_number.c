// program for find Armstrong number
#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0,temp,rem,num;                 //where temp= temporary variable , rem = storing remainder , num= input number
    printf("enter the number : ");
    scanf("%d",&num);
    temp = num;                                          //storing that original number in temporary variable to compare it....
    while(num>0)
    {
        rem = num%10;                               //where % operator gives remainder or last digit of number eg: 153% 10 = 3
        sum = sum+ rem*rem*rem;               //here we making each digit cube and adding in sum
        num = num/10;                                   //gives quotient part i.e. it will remove last digit eg: 153/10 = 15
    }
    if(sum == temp)
    {
        printf("Yes,...entered number is an armstrong number ");
    }
    else
        printf("No,...entered number is not an armstrong number ");
}
