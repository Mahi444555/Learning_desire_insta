//program for the swapping of two numbers easy (but ***Important)
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;                                   //where a=first number   b= second number and temp = temporary
    printf("enter first number\n");            //variable to hold value
    scanf("%d",&a);                                 //where &a which means we storing value in variable 'a'
    printf("enter second number\n");
    scanf("%d",&b);
    printf("\n before swapping of numbers \n a=%d, b=%d",a,b);

    temp =a;
    a=b;
    b=temp;
    printf("\n after swapping of numbers \n a=%d, b=%d",a,b);
    getch();

}

