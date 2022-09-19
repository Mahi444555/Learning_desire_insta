//program to calculate average of any number using for loop...
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,newno,total=0;        //where, n: input, i:iteration, newno:agn ask number from user
    float avg;
    printf("enter the number...");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %d\t",i  ,printf("enter the number  "));
        scanf("%d",&newno);
        total=total+newno;
    }
    avg=total/n;
    printf("Average of numbers is: %f",avg);
}
