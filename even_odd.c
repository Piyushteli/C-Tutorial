#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);

    if(number>=0){
        printf("Number is positive..\n");
        if(number%2==0){
            printf("Number is Even..\n");
        }else{
            printf("Number is odd\n");
        }

    }else{
        printf("Number is Negative..");
    }
}