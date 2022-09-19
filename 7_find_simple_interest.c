//program for the find simple interest
// logic : si = [(p*n*r)/100]                  where p = principle amount , n=no of days, r=rate of interest

#include<stdio.h>
#include<conio.h>
void main()
{
    int clrscr();
    float si, p,n,r;
    printf("enter the values 'p'    'n'  'r' : ");
    scanf("%f %f %f", &p, &n, &r);
    si = (p*n*r)/100;

    printf("simple interest is: %f",si);
    getch();
}
