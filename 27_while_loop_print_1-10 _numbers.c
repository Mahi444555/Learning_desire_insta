//   ..........................programs  on while and do while loop.....................
//program to print 1 to  10 numbers using while loop
#include<stdio.h>
#include<conio.h>
void main()
{

    int  i=1;                                   //where 'i' is a iteration till condition get false it will continuous increase

    while(i <= 10)                       // i <= 10 i.e. 1 <= 10 true ,
    {
        printf("%d \t", i);              //here printing 'i' : 1 2 3 4 5 6 7 8 9 10 only
        i++;                                 //after printing 'i' it will increment by +1 i.e. i = i+1  , when i will be more than
                                                            //10 i.e. i= 10+1 =11 then condition get false and get out of loop
    }
getch();
}
