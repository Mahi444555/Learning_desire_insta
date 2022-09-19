//program for understanding of goto keyword in c
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n%2==0)  //i.e. even no
        goto even;
    else
        goto odd;

    even:
        printf("it's even number %d",n);
        exit(0);                             //exit(0) used for after printing even number just terminate our program...
    odd:
        printf("it's odd number %d",n);
getch();
}
