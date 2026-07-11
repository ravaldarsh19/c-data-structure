#include<stdio.h>
#define PI 3.14
void main()
{
    float area ;
    int r;
    printf("Enter radius");
    scanf("%d",&r);
    area=PI*r*r;
    printf("%f",area);
        getchar();
}