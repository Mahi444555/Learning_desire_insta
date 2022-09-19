
//program to find area of triangle   logic : 1/2 * base * height
#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    float area, b, h;                                            //where b=base, h=height   we taken floating type variables
                                                                        //because the result we got in points hence
    printf("enter the base  values: ");
    scanf("%f",&b);                                            //taking base and height values from user

    printf("enter the height values: ");
    scanf("%f",&h);

    area = 0.5*b*h;
    printf("area of triangle is : %f",area);

    getch();

}
