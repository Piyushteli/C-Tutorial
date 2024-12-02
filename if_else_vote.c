#include<stdio.h>
int main()
{
    int age;
    printf("Enter age :");
    scanf("%d",&age);

    /*if(age>=18)
    {
     printf("Adult\n");
     printf("can Vote\n");
     printf("can drive");
    }
    else
    {
       printf("Not Adult\n");
    }
     */
    //Ternary operator
    age>=18 ? printf("adult"):printf("Not Adult");
}