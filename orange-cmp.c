#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char s1[]="orange";
char s2[]="this is orange juice";
char s3[25];
int a,b,present=0;

for(b=0;b<strlen(s2)-strlen(s1)+1;b++)
{

for(a=0;a<strlen(s1);a++)
{
 s3[a] = s2[a+b];
}

if(strcmp(s1,s3) == 0)
{
 present=1;
 break;
}
}

printf("%d\n",present);

return 0;
}
