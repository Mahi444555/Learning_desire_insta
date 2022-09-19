//program for the to check number is +ve or -ve
//logic : all numbers which are lower than zero '0' all i.e. negative and more than '0' all positive
// .... -5,-4,-3,-2,-1, 0, 1,2,3,4,5,....
#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    int n1, result;
    printf("enter the number: ");
    scanf("%d",&n1);
    if(n1 > 0)                                  //note : if we have only one statement then no need to write in culry_bracket's
        printf("number: %d is greater than zero and it's positive",n1);

    else if(n1 < 0)
        printf("number: %d is less than zero and it's negative",n1);

    else
        printf("number :%d is equal to zero it's nutral",n1);

 getch();
}

