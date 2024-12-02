#include<stdio.h>
#include<math.h>

float Area_square(int side);
float Area_circle(float radius);                //Function Declaration
float Area_Rectangle(int a,int b);

float Area_square(int side){
    printf("Area_square = %d\n",side*side);
}

float Area_circle(float radius){                               //Function Defination
    printf("Area_circle = %f\n",3.14*radius*radius);

}

float Area_Rectangle(int a,int b){
    printf("Area_Rectangle = %d\n",a*b);
}

int main(){
    //for Area_Square
    int side;
    printf("Enter the side:");                    //Function call
    scanf("%d",&side);

    Area_square(side);

    //Area_Circle
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);

    Area_circle(radius);

    //Area_Rectangle
    int a,b;
    printf("Enter a:");
     scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    Area_Rectangle(a,b);
   
}


