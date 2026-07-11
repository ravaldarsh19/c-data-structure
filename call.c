#include<stdio.h>
void sum(int *a, int *b);
void main()
{
    int a, b;
    printf("Enter a and b");
    scanf("%d %d", &a, &b);
    sum(&a, &b);
    getchar();
}
void sum(int *a, int *b)
{
    int c = *a + *b;
    printf("Sum is %d \n",c);
}
