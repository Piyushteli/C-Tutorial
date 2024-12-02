#include<stdio.h>
int main()
{
    //int marks=89;
    //int maths=65;
    //nt phys=90;

    int marks[3];

    printf("Enter physics=");
    scanf("%d",&marks[0]);

    printf("Enter chemistry =");
    scanf("%d",&marks[1]);

    printf("Enter math=");
    scanf("%d",&marks[2]);

    printf("phy:%d,chemistry:%d,maths:%d",marks[0],marks[1],marks[2]);



    //int mark[3]={89,65,90};
    //printf("%d",mark[0]);
}