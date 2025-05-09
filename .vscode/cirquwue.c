#include<stdio.h>
#include<conio.h>
#define size 5
int fro=-1;
int rear=-1;
int  que[10];
void enqueue ();
void dequeue();
void display();
void peek();
void main()
{
    int ch;
    do
    {
     printf("1.enqueue\n 2.dequeue\n 3.peek\n 4.display\n 5. exit\n");
     printf("enter the choice");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1 : enqueue();
                 break;
        case 2 : dequeue();
                 break;
        case 3 : peek ();
                 break;
        case 4 : display();
                 break;
     }
    } while(ch!=5);
    
}
 
void enqueue()
{
     if((rear+1)%size==fro)
     {
        printf("the queue is full");
     }
     else 
     {
        rear=(rear+1)%size;
        printf("enter the element");
        scanf("%d",&que[rear]);
          if(fro==-1)
          {
            fro=0;
          }
        }
}
void dequeue()
{
    if(fro==-1&&rear==-1)
    {
        printf("the queue is empty");
    }
    else if(fro==rear)
   {
      printf("your deleting the final node %d",que[fro]);
      fro=-1;
      rear=-1;        
    }
    else
    {
        printf("your deleting %d",que[fro]);
        fro=(fro+1)%size;
    }

}
void peek()
{
    if(rear==-1&&fro==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("the front element is %d",que[fro]);
    }
    
}
void display()
{
    int i;
              if(rear==-1&&fro==-1)
              {
                printf("the queue is empty");
              }
              else
              {
                i=fro;
                 do
                 {
                    printf("%d",que[i]);
                    i=(i+1)%size;
                 } while (i!=rear);
                 printf("%d",que[i]);
              }
}