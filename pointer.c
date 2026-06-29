#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter a & b");
    scanf("%d%d",&a,&b);
    int *p,*q;
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("%d",sum);
    return 0;
}