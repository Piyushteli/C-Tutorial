#include<stdio.h>

void Namste();
void bonjour();

void Namste(){
    printf("Namste..!");
}

void bonjour(){
    printf("bonjour...!");
}

int main(){
    char ch;
    printf("Enter the nationality indian I and french f:");
    scanf("%c",&ch);

    if(ch=='i'){
        Namste();
    }else{
        bonjour();
    }
}
