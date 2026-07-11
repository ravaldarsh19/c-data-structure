#include <stdio.h>
void sum(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void main()
{
    int a, b;
    printf("Enter a and b");
    scanf("%d %d", &a, &b);
    sum(a, b);
    sub(a, b);
    mul(a, b);
}
void sum(int a, int b)
{
    int c = a + b;
    printf("Sum is %d \n",c);
}
void sub(int a, int b)
{
    int c = a - b;
    printf("Sub is %d \n ",c);
}
void mul(int a, int b)
{
    int c = a * b;
    printf("Mul is %d \n ",c);
}