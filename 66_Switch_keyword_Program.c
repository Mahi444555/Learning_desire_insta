#include<stdio.h>
#include<conio.h>
void main()
{int a,b;
    char op;
    printf("enter the operation +  -  /  *   \n");
    scanf("%c",&op);
    printf("enter any two values...");
    scanf("%d %d ",&a,&b);  //any two values which used to perform operation
    switch(op)
    {
    case '+':
        printf("sum = %d",a+b);
        break;              //break used to break loop otherwise next to it will print  execution
    case '-':
        printf("subst = %d",a-b);
       break;
    case '*':
        printf("multiplication= %d",a*b);
        break;
    case '/':
        printf("division= %d", a/b);
        break;
    default:
        printf("invalid input ");
        }
getch();
}
