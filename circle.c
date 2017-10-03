#include<stdio.h>
#include<stdlib.h>

int main()
{
float radius,area,perimeter;
printf("What is the radius of the circle =  ");
scanf("%f",&radius);
area=3.14*radius*radius;
perimeter=2*3.14*radius;
printf("Area of the circle = %f",area);
printf("\n Perimeter of the circle = %f",perimeter);

return 0;
}
