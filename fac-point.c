#include<stdio.h>
#include<stdlib.h>

void fact(int* num,int* n)
{
 int f=1;
 for((*n)=1;(*n)<=(*num);(*n)++)
 {
  f=(*n)*(f);
 }
printf("The factorial = %d",f);
}

int main()
{
int num,n,b;
printf("Write the number to take factorial \n");
scanf("%d",&num);
fact( &num, &n);

return 0;
}
