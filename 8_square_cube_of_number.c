
//program for the find square and cube of a given number

#include<stdio.h>
#include<conio.h>
void main()
{

    int clrscr();
    int square , cube, no;          //where no = number taken from user

    printf("enter the number : ");
    scanf("%d",&no);                            //note : we used '&'  only when we have to accept value from user

    square = no * no;
    printf("square: %d \n",square);

    cube = no* no *no;
    printf("cube: %d \n",cube);

    getch();
}
