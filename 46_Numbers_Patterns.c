/*program to print the following pattern
1  1   1  1  1
2  2  2  2  2
3  3  3  3  3
4  4  4  4  4
5  5  5  5  5
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;  //where n=input number i=row/lines and j=columns
    printf("enter the n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)       //outerloop is for print number of lines
    {
        for(j=1;j<=n;j++)   //inner loop is for columns in that we printing i'th value for each iteration
        {
            printf("%d ",i);    //printing line /row no here for each iterations
        }
        printf("\n");
    }
    getch();
    return 0;
}
