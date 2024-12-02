#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    int _age=*ptr;

    //address
    printf("%p\n",ptr);
    printf("%p\n",&age);

    //value
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
}

