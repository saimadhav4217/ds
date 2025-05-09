#include<stdio.h>
#include<conio.h>
#define size 5
int que[10];
int fro=-1;
int rear=-1;
void display();
void enqueue();
void dequeue();
void peek();
void main()
{
    int ch;
     do
     {
        printf("1enqueue\n 2 dequeue\n 3 peek\n 4 diaplay\n 5.exit\n");
        printf("enter your chioce");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :  enqueue();
                      break;
            case  2:  dequeue();
                      break;
            case 3 :  peek();
                      break;
            case 4 :  display();
                      break;
        }
     }while(ch!=5);

}
void  enqueue()
{
     if(rear==size-1)
     {
        printf("the queue is full");
     }
     else
     {
        rear++;
        printf("enter the element");
        scanf("%d",&que[rear]);
        if(fro==-1)
        fro=0;
     }
}
void dequeue()
{
    if(fro==-1&&rear==-1)
    {
        printf("the queue is empty");
    }
    else if(rear==0) 
    {
        printf("your deleting the final node ");
        fro=-1;
        rear=-1;
    }
    else
    {
        printf("the deleted elament is %d", que[fro]);
        fro++;
    }
}
void peek()
{
    if(fro==-1&&rear==-1)
    {
        printf("the queue is empty");
    }
    else
    {
        printf("the front element is %d",que[fro]);
    }
}
void display()
{
    int i;
    if(fro==-1&&rear==-1)
     {
        printf("the queue is empty");
     }
      else
      {
        for(i=fro;i<=rear;i++)
        {
            printf("%d",que[i]);
        }
      }
}
