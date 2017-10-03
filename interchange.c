#include<stdio.h>
#include<stdlib.h>

int main(){
int a[5],i;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(i=0;i<3;i++)
{
int b;
b=a[i];
a[i]=a[4-i];
a[4-i]=b;
}
printf("\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}

return 0;
}

