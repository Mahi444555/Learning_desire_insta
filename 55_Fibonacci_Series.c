//program on print  fibonacci series.... 0+0=0   0+1=1  1+1=2   1+2=3    2+3=5...
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i,a=0,b=1,temp;
    printf("Enter the n: ");
    scanf("%d",&n);
    printf("%d  ",a);
    printf("%d  ",b);           //we just printing both a and b's values before
    for(i=1;i<=n;i++)
    {
        temp=a+b;
        printf("%d  ",temp);
        a=b;                                               //here just swapping numbers
        b=temp;
    }
}
