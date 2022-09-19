//program for calculate discriminant and to identify roots of a quadratic equation
//logic:  ax^2 +bx^2 +c     // D = b^2-4.a.c
#include<stdio.h>
#include<conio.h>
void main()                 //where void means no return value and int = then have to return value
{
    float x,r1,r2,a,b,c;
    int clrscr();
    printf("enter the a,b,c values: ");
    scanf("%f %f %f",&a,&b,&c);     //here %f due to we declare a,b,c as float
    x=b*b-4*a*c;    //to find discriminant
    r1= (-b + x) / 2*a;     //to find root 1
    r2= (-b -x) / 2*a;      //to find root 2
    if(x>0)
        printf("\n roots are unequal...\n");
    else if(x<0)
        printf("\n roots are imaginary...\n");
    else
        printf("\n roots are same....\n");

    printf("root_1 : %f\n",r1);
    printf("root_2 : %f\n",r2);
    printf("discriminant is: %f\n",x);
getch();
}
