// program for the accept two values from user and make addition, substraction, multiplication, and division
#include<stdio.h>
#include<conio.h>
void main()
{int clrscr();
    int n1, n2, sum,sub,mul,div;              //declaration of variables

    printf("enter the first number: ");
    scanf("%d",&n1);                            //using  '&' i.e. ampersand sign we accept the values from user

    printf("enter the second number: ");
    scanf("%d", &n2);                              //scanf() is used to take inputs form user

    sum = n1+n2;
    printf("addition is : %d \n", sum);

    sub = n1-n2;
    printf("substraction is : %d \n", sub);

    mul = n1*n2;
    printf("multiplication : %d \n ", mul);

    div = n1/n2;
    printf("division is : %d \n", div);
    getch();
}
