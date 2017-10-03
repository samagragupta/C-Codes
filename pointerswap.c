#include <stdio.h>
void swap( int *a, int *b )
{
    int t; 
    t = *a; 
    *a = *b; 
    *b = t; 
}
int main() 
{
    int num1, num2; 
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    swap( &num1, &num2);
    printf("First number : %d\n", num1);
    printf("Second number : %d\n", num2);
    return 0;
}
