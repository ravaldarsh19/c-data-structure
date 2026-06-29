#include<stdio.h>
//#include<conio.h>
int main()
{
    int a[10],sum=1;
    for (int i=1;i<=10;i++)
    {
    printf("enter value");
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;   
}
