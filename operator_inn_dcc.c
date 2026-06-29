#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    printf("%d\n",a++);
    printf("%d\n",b--);
    printf("%d\n",a);
    printf("%d\n",++a);

}
 //a++ a=a+1 
//a++ assign and then increment
//++a increment and then assign 