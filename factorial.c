#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a,f=1;
printf("Enter the number : "); //The number of which factorial shoild be taken
scanf("%d",&n);

if(n>0)
{
for(a=n;a>=1;a--)
{
f=f*a;
}
printf("Factorial of of the number  : %d",f);
}
else
{
printf("Factorial of 0 = 1");
}

return 0;
}
