/*Accept user's  marital status, gender and age and check
if he/she is eligible for marriage or not
    exp:  marital status = married 'm' or unmarried 'u' if age
    age : 18,20,21... eligible and less than 18 not eligible
*/

#include<stdio.h>
#include<conio.h>
void main()
{

    int clrscr();
    int age;
    char marital_status, Gender;       //marital Status & Gender will be in character hence : char
    printf("enter the  age... marital_status... Gender");
    scanf("%d %c %c",&age,&marital_status,&Gender);

    if(marital_status == 'U' || marital_status == 'u')  //i.e. u= unmaried
    {
         if(age >=21)    //for male
        {
            if((Gender == 'M') || (Gender == 'm'))
                printf("He is eligible for marriage");
            else
                printf("Gender is not matched");
        }

        else if (age >=18)      //for female
        {
            if(Gender == 'F' || Gender =='f')

                printf("She is eligible for marriage");
            else
                printf("Gender is not matched");
        }

    }
    else if(marital_status == 'M' || marital_status =='m')

        printf("Not eligible for Married");
    else
        printf("out of rules");

}
