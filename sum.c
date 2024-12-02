#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
  
    for(int i=1,j=n; i<=n && j>=1; i++,j--){
        sum=sum+i;
        printf("%d\n",j);
        
    }
    printf("%d\n",sum);

}