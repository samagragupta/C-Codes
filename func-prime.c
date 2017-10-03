#include<stdio.h>
#include<stdlib.h>

void factorial(int number)
{
int r,num=number,a;
if(num!=1||2)
{
for(a=2;a<num;a++)
{
 r=num%a;
if(r==0)
{
break ;
}
}
if(r!=0)
{
 printf("%d is a prime number",num);
}
else
{
 printf("%d is a composite number",num);
}
}
else
{
printf("The number is prime number");
}
}


int main()
{
int number;
printf("Write the  number : ");
scanf("%d",&number);

if(number>0)
{
factorial(number);
}
else
{
printf("Error");
}

return 0;
}
