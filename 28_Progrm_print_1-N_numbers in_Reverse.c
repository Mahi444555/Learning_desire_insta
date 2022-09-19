//program for print numbers 1 to n in reverse order using do-while loop
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i=1 ;    //always initialize the i value according to logic
    int clrscr();
    printf("enter the value of n: ");
    scanf("%d",&n);

    i=n;                                 //here i'm assigning value of 'n' ie. user input no directly to 'i'  eg: n= 10 then i =10,
    do{
        printf("%d\t",i);              //firstly i i.e. 10 will printed
        i--;                                 // i=10-1 = 9 , 8, 7, 6, 5, 4, 3, 2, 1, 0

    }while(i>=1);               // checking condition, last updated value of 'i' is 9 : 9>=1 true, again execute do loop
                                        // 8>=1, 7>=1, 6>=1, 5>=1, 4>=1, 3>=1, 2>=1, 1>=1 , 0>=1 false out of loop
getch();
}
