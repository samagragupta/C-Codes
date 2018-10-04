#include<stdio.h>
#include<conio.h>
void main()
{
    float side,area;
    clrscr();

    printf("\n Enter the Length of Side : ");
    scanf("%f",&side);

    area = side * side ;


    printf("\n Area of Square : %f",area);//for print
    getch();
}
