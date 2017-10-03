#include<stdlib.h>
#include<stdio.h>

int rev(int* n)
{
int reverse=0;
while(*n!=0)
{
 reverse=10*reverse+(*n)%10;
 (*n)=(*n)/10;
}
return reverse;
}

int main()
{
int b,no;
printf("What is the number\n");
scanf("%d",&no);
b=rev(&no);
printf("revrse of the number : %u",b);

return 0;
}
