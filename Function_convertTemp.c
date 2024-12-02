#include<stdio.h>

float converttemp(float celsius);

float converttemp(float celsius){
    float far = celsius * (9.0/5.0) +32;
    return far;
}

int main(){
    float far=converttemp(32);
    printf("far :%f",far);
    return 0;
}


