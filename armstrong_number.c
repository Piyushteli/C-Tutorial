#include<stdio.h>
int main()
{
    int i,sum=0,x;

    printf("Enter the Number:");
    scanf("%d",&i);
    x=i;

    while(i>0){
        sum=sum+(i%10)*(i%10)*(i%10);
        i=i/10;

    }
    if(x==sum){
        printf("armstrong number");
    }
    else{
        printf("Not armstrong number");

    }
}