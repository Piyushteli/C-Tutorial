#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a=");
    scanf("%d",&a);

    printf("Enter b=");
    scanf("%d",&b);

    int *p,*q;        //pointer  variables
     p =&a;
     q =&b;
     temp =*q;
    *q=*p;
    *p= temp;

    printf("After Swapping a=%d,b=%d",a,b);

    

     
    
}