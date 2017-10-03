#include<stdio.h>
#include<stdlib.h>

int main()
{
char n;
printf("What is  your name ");
scanf("%c",&n);
printf("your good name %c \n",n);
int f,e,d,c,a,b;
printf("Length of the Rectangle : ");
scanf("%d",&a);
printf("Breadth of the Rectangle : ");
scanf("%d",&b);

for(e=1;e<=a;e++)
{
printf("%c ",n);
}

 for(f=1;f<=b-2;f++)
 {
 printf("\n%c ",n);

  for(d=1;d<=a-2;d++)
  {
  printf("  ");
  }

 printf("%c ",n);
 }

printf("\n");

  for(c=1;c<=a;c++)
  {
   printf("%c ",n);
  }


return 0;
}
