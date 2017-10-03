#include<stdio.h>
#include<stdlib.h>

int main()
{
int line,a,b,star;
printf("Write the number of lines : ");
scanf("%d",&line);


for(a=1;a<=line;a++)
{
 for(b=a;b<line;b++)
 {
 printf(" ");
 }
 for(star=1;star<=2*a-1;star++)
 {
  printf("*");
 }
printf("\n");
}


return 0;
}
