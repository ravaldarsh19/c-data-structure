#include<stdio.h>
#include<stdlib.h>
#define size 10
int front=-1,rear=-1,queue[5] ;
void enqueue(int a);
void dequeue();
void display();
void main()
{
    int choice,a;
    while(1){
        printf("1.enqueue\n2.dequeue\n3.display\n4.exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter value to enqueue");
                scanf("%d",&a);
                enqueue(a);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice");
        }
    }
    getchar();
}
   
void enqueue(int a){
    if(rear==4)
    {
        printf("Queue is overflow \n");
    }
    else{
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=a;
        printf("Successfully enqueue value \n");
    }
   

}
 void display()
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            printf("%d \n",queue[i]);
        }
    }
   void dequeue()
   {
       if(front==-1 || front>rear)  // if (rear==-1))
       {
           printf("Queue is underflow \n");
       }
       else{
           printf("Dequeue value is %d \n",queue[front]); // front++;
           front++;
       }
   }
