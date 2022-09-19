//program for the print 3 numbers in ascending and descending order
#include<stdio.h>
#include<conio.h>
void main()
{

    int clrscr();
    int a,b,c;
    printf("enter any three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

if((a>=b) && (a>=c))     //where && and operator executes when both condition ture
    {
        if(b>=c)            //now check between b and c who is greater
        {
            printf("\n Descending order : %d %d %d",a,b,c);
            printf("\n Ascending order : %d %d %d",c,b,a);
        }
        else                    //if c is greater than b then execute these block.
        {
            printf("\n Descending order : %d %d %d",a,c,b);
            printf("\n Ascending order: %d %d %d",b,c,a);
        }
    }
else if((b>=a) && (b>=c))  //now b is greater
    {
        if(a>=c)        //check between b and c and : a is greater if : execute block.
        {
                printf("\n Descending order : %d %d %d",b,a,c);
                printf("\n Ascending order : %d %d %d",c,a,b);
        }
        else                //other wise if c is greater then execute these block.
        {
                printf("\n Descending order : %d %d %d",b,c,a);
                printf("\n Ascending order : %d %d %d",a,c,b);
        }
    }
else if ((c>=a) && (c>=b))
        {
            if(a>=b)        //check bwtn a and b
            {
                printf("\n Descending order: %d %d %d",c,a,b);
                printf("\n Ascending order : %d %d %d", b,a,c);
            }
            else
            {
                printf("\n Descending order: %d %d %d",c,b,a);
                printf("\n Ascending order : %d %d %d", a,b,c);
            }
        }
getch();
}
