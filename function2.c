#include<stdio.h>
void even(int a);
void greater(int a, int b);
void main()
{
    int a, b;
    printf("Enter a and b");
    scanf("%d %d", &a, &b);
    even(a);
    greater(a, b);
}
void even(int a)
{
    if(a%2==0)
    {
        printf("Even number \n");
    }
    else
    {
        printf("Odd number \n");
    }
}
void greater(int a, int b)
{
    if(a>b)
    {
        printf("Greater number is %d \n",a);
    }
    else
    {
        printf("Greater number is %d \n",b);
    }
}