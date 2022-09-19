
//program for to understand the datatypes and variables in c -language

#include<stdio.h>
#include<conio.h>
void main()
{

    int clrscr();   //clear screen

    int a =10;      //integer values only

    float b = 10.20;    //float values only i.e. with decimal point we can stored in b

    char ch =  'm';         //character value stored in ch always written in single quotes

    printf("%d \n",a);       //where \n is new_line and used format-specifiers
    printf("%f \n",b);          //format_specifier is %f for float
    printf("%c \n",ch);

    getch();
}
