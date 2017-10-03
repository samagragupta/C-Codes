#include<stdio.h>
#include<stdlib.h>

int perimeter(int length,int breadth)
{
 int peri;
 peri=2*(length+breadth);
 return peri;
}

int area(int length,int breadth)
{
 int area;
 area=length*breadth;
 return area;
}

int main()
{
int length,breadth,p,a;
printf("What is the lentgth = ");
scanf("%d",&length);
printf("What is the breadth = ");
scanf("%d",&breadth);
p=perimeter(length,breadth);
printf("Perimeter of the rectangle = %d",p);
a=area(length,breadth);
printf("\nArea of the rectangle = %d",a);

return 0;
}
