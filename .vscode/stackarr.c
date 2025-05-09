#include<stdio.h>
#include<conio.h>
#define size 5
int sta[10];
int top=-1;
void push();
void pop();
void peep();
void display();
void main()
{
    int ch;
    do
    {
    printf("1.push\n2.pop\n3.peep\n4.display\n 5.exit\n");
    printf("enter your chioce ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : push();
                 break;
        case 2 : pop();
                 break;
        case 3 : peep();
                 break;
        case 4 : display();
                 break;
              
    }
    }while(ch!=5);
}   
 void push()
 {
       if(top==size -1)
       {
        printf("the stack is full");
       }
       else
       {
        top++;
        printf("enter the element");
        scanf("%d",&sta[top]);
       }
 }
 void pop()
 {
    if (top == -1)
    {
        printf("the stack is empty");
    }
    else 
    {
      printf("the deleted element is %d",sta[top]);
      top--;
    }
 }
 void peep()
 {
   if(top == -1)
   {
    printf("the stack is empty");
   }
   else
   {
    printf("the top most element is %d",sta[top]);
   }
 }
 
 void display()
 {
   int i;
    if(top==-1)
    {
        printf("the stack is empty");
    }
    else
    {
         for(i=top;i>=0;i--)
         {
            printf("%d",sta[i]);
         }
    }
 }
 