//program  to calculate the sum of given numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i, nextnumber,sum=0;        //where n : input number , i : iteration till n, nextnumber : input numbers
    printf("enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&nextnumber);        //taking input number form user
        sum = sum + nextnumber;
    }
    printf(" total = %d", sum);
    getch();
}
