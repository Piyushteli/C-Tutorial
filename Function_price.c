#include<stdio.h>

void calculateprice(float value);   //Function declaration 

void calculateprice(float value){
    value=value+(0.18*value);             //Function Defination
    printf("final price is:%f",value);
}

int main()
{
    float value=100.00;
    calculateprice( value);          ////Function Call

}

