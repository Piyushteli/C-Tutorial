#include<stdio.h>
int main()
{ 
    int rows;
    printf("number of rows");
    scanf("%d",&rows);
    int i,j;
    for(i=1;i<=rows;++i){
        for(j=5;j>=i;--j){
            printf("*");
        }
        printf("\n");

    }
}