#include<stdio.h>
int main()
{
    int a[10],big;
    for(int i=0;i<5;i++)
    {
        printf("Enter value");
        scanf("%d",&a[i]);
    }
    big=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
            break;
        }
    }
    printf("the big is %d",big);
    return 0;
    
}
// 9 6 1 8 17