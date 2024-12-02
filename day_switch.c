#include<stdio.h>
int main()
{
    int day;
    printf("Enter day(1-7):");
    scanf("%d",&day);
    
switch (day)
{
case 1:printf("MONDAY\n");
      break;

case 2:printf("Tuesday\n");
      break;      

case 3:printf("WENESDAY\n");
      break;      

case 4:printf("THUESDAY\n");
      break;      

case 5:printf("FRIDAY\n");
      break;

case 6:printf("SATURDAY\n");
      break;

case 7:printf("SUNDAY\n");
      break;

default: printf("Not valid day\n");
}           


      





    

}