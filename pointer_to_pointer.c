#include<stdio.h>
int main()
{
    //pointer to pointer
    //syntax
  /*  int **pptr;
    char **pptr;
    float **pptr;*/

    int i =5;
    int *ptr=&i;
    int **pptr=&ptr;

    printf("%d",**pptr);

}