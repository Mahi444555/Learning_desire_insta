//program for the continue keyword how it's works
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1; i<=10;i++)
    {
        if(i==5 || i== 8)   // continue  used to skip  the loop perticular statement...
         {                              //print only 1 2 3 4  and 5 & 8 will skip it will continue  the loop
             continue;       // here continue will execute's only when i' value is 5 or 8
        }                       //otherwise all values will get print
        printf("%d   ",i);
    }
getch();
}

