//program for the understanding of different types of format specifiers
//format specifiers are some standard which used in programming languages for accept and print perticular values
#include<stdio.h>
#include<conio.h>
void main()
{

printf("enter the integer type of values : ");
int a=10;
printf("%d \n",a);                                                //where  %d is used to take and print only integer/whole numbers

printf("enter the float types of values : ");
float f = 20.20;                                        //all floating values always by defautly double i.e. 8bytes  make it (20.20f)
printf("%f \n",f);                                                 //where %f is used for floating values       and \n is for print in new line

printf("enter the characters value: ");
char ch = 'z';
printf("%c \n", ch);                                               //where %c is used for character types of values
getch();
}
