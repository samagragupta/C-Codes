#include<stdio.h>
#include<stdlib.h>

int main()
{
int sum,n,first,second,third;
printf("Enter a three digit number : ");
scanf("%d",&n);
first=n/100;
n=n%100;
second=n/10;
third=n%10;
sum=first+second+third;
printf("The sum of the digits : %d",sum);

return 0;
}
