/*program for print the following pattern
1                       here we printing jth value till line number first line so print line number iteslf
1 2                         //2nd line print till line no i.e. 1 & 2
1 2 3                       // 3rd line print till 1 2 3
1 2 3 4                        //4rth line print 1 2 3 4
1 2 3 4 5                      //5th line print 1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("enter the number of lines n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   //i.e. i=1; i<=5;i++   whatever n's value it will print till that lines
    {
        for(j=1;j<=i;j++)   //now here jth loop will iterates till ith  i.e. line number
        {
            printf("%d ",j);
        }
        printf("\n");
    }
getch();
}
