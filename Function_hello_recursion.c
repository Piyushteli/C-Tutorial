#include<stdio.h>

void printHW(int count);

void printHW(int count){
    if(count == 0 ){
        return;
    }
    printf("Hello World...!\n");
    printHW(count-1);   
}

int main()
{
    printHW(10);
    return 0;
}
