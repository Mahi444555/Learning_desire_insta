//program for break keyword how it works
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    for(i=1; i<=10;i++)
    {
        if(i==5)   //break used to terminate the loop
         {                              //print only 1 2 3 4  and after 5 it will break the loop
             break;          // here break will execute's only when i' value is 5
        }                       //otherwise all values will get print
        printf("%d   ",i);
    }
getch();
}
