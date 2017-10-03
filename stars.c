#include<stdio.h>
#include<stdlib.h>

int main(){
int a,i,j;
printf("write your number : ");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
for(j=0;j<i;j++)
{
printf("*");
}
printf("\n");
}

for(i=0;i<=a;i++)
{
for(j=a-1;j>=0;j--)
{
printf("*");
}
printf("\n");
}

return 0;
}
