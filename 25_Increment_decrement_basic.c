//program to understand the increment and decrement operator

#include<stdio.h>
#include<conio.h>
void main()
{
    int x =10,y=20;

/* (post increment)
    x = y++;                                       //these is post increment so firstly assign the value of y to the x then y = increment
    printf("x = %d  y = %d \n",x,y);            // output = x=20, y= 21
*/

/*(pre increment)
    x = ++y;                                //now, these is post increment so firstly increment value by +1 (1+20=y) then final updated
                                                //value of 'y' will assign to the x  ,  now both are  output:  x= 21, y=21
    printf("x = %d  y = %d",x,y);
*/

/*(post decrement)
    x = y--;                                //post decrement so, firstly y's value will assign to 'x' then y will be decrease by -1
    printf("x = %d  y = %d",x,y);       // output   x= 20 , y = 19
*/


    x = --y;                                //pre decrement so, firstly y' will be decrease by -1 and then value will stored in y then final
    printf("x = %d  y = %d",x,y);           // final value will assign to the x i.e.  output: x = 19 , y= 19

}
