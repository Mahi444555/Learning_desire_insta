 //program to calculate grade based on the avg marks
 /* : if avg is more than or equal to 60 then grade : A
    : if avg is between 50 - 60 then grade : B
    : if avg is between 40 - 50 then grade : c
    : else  grade : Good>>
    these is multi line comment ...
*/

#include<stdio.h>
#include<conio.h>
void main()
{

    int roll_no, m1,m2,m3,total;
    float avg;
    int clrscr();
    printf("enter the three subject marks: m,m1,m3 ");
    scanf("%d %d %d",&m1,&m2,&m3);
    total = m1+ m2 + m3;
    avg = total / 3;              //Note: by defaulty all float number all double until we write/convert like 3.0f;

    printf("\n total : %d",total);
    printf("\n avg : %f", avg);
    if(avg>=60)
        printf("\n Grade : A");
    else if((avg >= 50) && (avg < 60))
        printf("\n Grade : B");
    else if((avg >=40) && (avg < 50))
        printf("\n Grade : C");
    else
        printf("\n you are good");
    getch();
}
