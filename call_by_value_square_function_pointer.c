#include<stdio.h>
void square(int n);
void _square(int *n);

int main(){
    int number=4;
    square(number);                        //call by value
    printf("number is %d\n",number);       

    _square(&number);                       //call by reference
    printf("square is %d\n",number);

    return 0;
}


void square(int n){
    n=n*n;
    printf("square is %d\n",n);
}

void _square(int *n){
    *n=(*n)*(*n);
    printf("square is %d\n",*n);
}

