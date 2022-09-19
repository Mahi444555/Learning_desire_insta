//program find user is eligible for vote or not using ternary operator
#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    printf("enter the name: ");
    char ch;                                //where %s for string i.e. for accepting names  or words etc if we
    scanf("%s",&ch);                  //if we take character type format specifier it will only read single character not whole name
    int age;
    printf("enter the age of candidate: ");
    scanf("%d",&age);

    (age >= 18) ? printf("you are eligible for voting"): printf("you are not eligible for voting!");
                                                //or
    int  val = (age <= 18) ? (age+2): (age-2);       //if age less then equl to 18 add +2 in it otherwise remove -2
    printf("\n val = %d", val);

                            // if exp_1 is true then exp_2 get evaluate and get result stored in val and exp_3rd is get ignored
                            // and exp_1 is false then exp_2 get ignored and exp_3 get evaluated and get result stored in val
getch();
}
