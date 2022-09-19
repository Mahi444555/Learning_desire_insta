//program on goto keyword       (it works like recursion which is VVIP like function calls it self again an again.. :)
#include<stdio.h>
//#include<conio.h>
int main()
{
    int n=1;
    Jump:           //first time it won't run for n=1 then when n=2 it goto jump will jumps on label : jump..
            printf("%d ", n);    //it will just print n's numbers
            n++;
            if(n<=10)
                goto Jump;

    return 0;
}
