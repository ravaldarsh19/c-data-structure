#include<stdio.h>
#define size 10
int top=-1,i;//global declaration of stack
int stack[size];//global declaration of stack
void push(int a);
void pop();
void display();
void create();
void main()
{
    int a,choice;
    while(1){
    printf("1.push \n 2.pop \n 3.display \n 4.exit" );
    printf("\n Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter value to push");
            scanf("%d",&a);
            push(a);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exit ");
            exit(0);
        default:
            printf("invalid choice");
    }
}
    getchar();
}
void push(int a){
    if(top==size-1)
    {
        printf("stack is overflow \n");
    }
    else{
    top++;
    stack[top]=a;
    printf("successfuly push value \n");
    }
}
void pop(){
    if(top==-1)
    {
        printf("stack is underflow \n");
    }
    else{
        printf("pop value is %d \n",stack[top]);
        top--;
    }
}
 void display(){
    for(i=top;i>=0;i--)
    {
        printf("%d \n",stack[i]);


 }

}