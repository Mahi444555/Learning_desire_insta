//program for calculate multiplication of each number
//program  to calculate the sum of given numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i, nextnumber,mul=1;        //where n : input number , i : iteration till n, nextnumber : input numbers
    printf("enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&nextnumber);        //taking input number form user
        mul = mul * nextnumber;
    }
    printf(" multiplication = %d", mul);
    getch();
}

