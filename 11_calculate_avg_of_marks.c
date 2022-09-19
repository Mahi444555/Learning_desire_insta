//program for the calculate total and average of marks
//logic : avg = is nothing but addition of all terms divided by number of terms
#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    int roll_no, m1,m2,m3, total;   //variable declaration  all integer type
    float avg;                                 // where average is floating type the final result will comes in floating points hence....
    printf("enter the roll_no: \n");
    scanf("%d", & roll_no);
    printf("enter the marks_1:  \n");
    scanf("%d", &m1);
    printf("enter the marks_2:  \n");
    scanf("%d", &m2);
    printf("enter the marks_3: \n");
    scanf("%d",&m3);

    total = m1+m2+m3;
    avg = total / 3.0;              //exact logic goes here

    printf("Roll_number : %d\n",roll_no);
    printf("total_marks : %d\n",total);
    printf("average of marks : %f\n", avg);
    getch();
}
