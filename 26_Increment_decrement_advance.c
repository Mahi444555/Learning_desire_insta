//program for the increment and decrement

#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10;
/*
    int  c = a++ + a++;
    printf("c = %d , a = %d", c, a );           //output : c = 21 , a = 12


    //here,post increment firstly a = 10 it will assign to the c now c=10 then 'a' will agin incrt
    // by +1 now (a= 11) i.e. last updated value of 'a ' now it will assign to next  'a' i.e.
    // last updated value of 'a 'is  11 so it will firstly assign to next 'a' now now next 'a' is also 11 , &  c's value is 10 previous
    // it will add with next 'a' i.e. 11 so 10 + 11 = 21 so value of c = (21print)  and then, now last 'a' will
    // be incr by +1 now  a's value will be 1+11 = a i.e. a= 12 i.e. last updated value will print
*/
        //    1+10 = a          11+1=a
    int  c = ++a  + ++a ;                           //here, post increment then firstly increment then assign
                //12        12                              //c = 12+12 = 24 , a = 12   (note: in post last updated value of a i.e.  second (++a)
    printf("c = %d , a = %d", c, a );       //will assign to the first  'a' also then assign to c =  12 +12 =24 and   a's value will print i.e. 12 only

getch();
}
