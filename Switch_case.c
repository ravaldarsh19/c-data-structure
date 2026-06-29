#include<stdio.h>
int main()
{
    int a,b; 
    char choice;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Enter choice");
    scanf(" %c",&choice);

    switch (choice)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;    
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
    default:
        break;
    }
}