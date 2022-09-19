
#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{

    int n=5;
    int result= sum(n); //calling sum function
    printf(" sum : %d", result);


}
int sum(int n)
{

    if(n==1)        //5==1 f; 4==1f ; 3==1f; 2==1f; 1==1 true then it will  backtracking in stack
            return 1;
    else
        return n + sum(n-1);    //5+sum(4) 4+sum(3) 3+sum(2) 2+sum(1) then 1+2+3+4+5=15

}
