//In following program we just printing all that prime number which lies between two ends start and end eg: 5 to 15 : 5  7  11 13  only
#include<stdio.h>
#include<conio.h>
void main()
{
    int start,end,nn,i;                                 //where nn : nextNumber i.e. number between series...
    printf("Enter the start and end points: ");
    scanf("%d %d",&start, &end);
for(nn=start;nn<=end;nn++)              //s=5 e=15
    {
            for(i=2;i<=nn-1;i++)                  //it will start from 2 to iterates till n-1 for each no to check prime or not
            {
                if(nn % i == 0)
                {
                    printf("%d",nn);
                    printf("...Not prime\n");
                    break;
                }
            }
            if(i==nn){
                printf("%d",nn);
                printf("...Yes  prime\n");
            }
    }
getch();
}
