#include<stdio.h>
#include<stdlib.h>

int main(){
int a[5],i;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
printf("\n");
for(i=4;i>=0;i--)
{
printf("%d\n",a[i]);
}

return 0;
}
