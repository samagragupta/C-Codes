#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[10],k,j,b[10],i;
for(i=1;i<=10;i++)
{
 printf("Enter your number : ");
 scanf("%d",&a[i]);
}

for(j=1,k=10;j<=10,k>=1;j++,k--)
{
 b[k]=a[j];
 printf("b[%d] = %d\n",k,b[k]);
}

return 0;
}
