//program for the understanding of switch keyword
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    switch(n)
    {
            case 0:
                    printf("zero");
                break;

            case 1:
                    printf("one");
                break;

            case 2:
                    printf("two");
                break;

            case 3:
                    printf("three");
                break;

            case 4:
                    printf("four");
                break;

                case 5:
                    printf("five");
                break;

    default :
        printf("invalid input value entered "); //if no one case get matched with value then default case will be executed
     }
getch();
}

