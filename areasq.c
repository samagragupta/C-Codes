#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
double side,area;
printf("enter the side of a square : ");
scanf("%lf",&side);
area =pow(side,2);
printf("Area of the square : %lf",area);
printf("Area of square in integer form : %d",(int)area);

return 0;
}
