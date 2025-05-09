#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int n;
    struct node *next;
};
struct node *temp,*curr;
struct node* crete(struct node *);
struct node* insbeg(struct node *);
struct node* delbeg(struct node *);
struct node* delend(struct node *);
void insend(struct node *);
void display(struct node *);
void inspos(struct node *);
void delpos(struct node *);
void search(struct node *);
void reverse(struct node *);
void main(void)
{
struct node *s;
int ch;
s=NULL;
do
{
printf("1.create\n 2.insend\n 3.display\n 4.inspos\n 5 insbeg\n 6 delbeg\n 7 delend\n 8 delpos\n 9 search\n 10 reverse\n");
printf("enter your chioce");
scanf("%d",&ch);
          switch(ch)
          {
            case 1 :  s=crete(s);
                      break;
            case 2 :   insend(s);
                      break;
            case 3 :  display(s);
                      break; 
            case 4 :  inspos(s);
                      break;
            case 5 :  s=insbeg(s);
                      break;
            case 6 : s=delbeg(s);
                      break;
            case 7 : s=delend(s);
                      break;
            case 8 :  delpos(s);
                      break;
            case 9 :  search(s);
                      break; 
            case 10:  reverse(s);
                      break;         
            
          }
} while(ch!=11); 
}
 struct node* crete(struct node *x)
 {
                  if(x==NULL)
                  {
                    x= (struct node *)malloc(sizeof(struct node));
                    printf("ENter the value ");
                    scanf("%d",&x->n);
                    x->next=NULL;
                    return x;
                  }
                  else
                  {
                    printf("the list is already exist ");
                    return x;
                  }
 }
   
 void insend (struct  node *x)
 {
    curr=x;
               while (curr->next!=NULL)
               curr=curr->next;
            temp=(struct node *)malloc(sizeof(struct node));
            printf("enter the values");
            scanf("%d",&temp->n);
            temp->next=NULL;
            curr->next=temp;
          }

void display(struct node  *x)
{
  curr=x;
              while(curr!=NULL)
              {
                printf("%d->",curr->n);
                curr=curr->next;
              }
}

void  inspos(struct node *x)
{
   int c=1,pos;
   curr=x;
   printf("enter the postion ");
  scanf("%d",&pos);

                  while(curr->next!=NULL)
                  {
                    c++;
                     if(c==pos)
                      {
                        temp=(struct node *)malloc(sizeof(struct node));
                        printf("enter the value");
                        scanf("%d",&temp->n);
                        temp->next=NULL;
                       temp->next=curr->next;
                       curr->next=temp;
                       break;
                     }
                     curr=curr->next;
                  }
}

struct node *  insbeg(struct node *x)
{
  curr=x;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter the value ");
  scanf("%d",&temp->n);
  temp->next=x;
  return temp;
}

struct node * delend(struct node *x)
{
  struct node *pr;
  curr = x;
           if( x==NULL)
          {
            printf("the list is empty");
            return x;
          }

          else if( curr->next==NULL)
          {
            printf("your deleting thr final node");
            free(curr);
            x=NULL;
            return x;
          }

          else 
          {
            while(curr->next!=NULL)
            {
              pr=curr;
              curr=curr->next;
            }
            pr->next=NULL;
            free(curr);
            return x;
          }

}

struct node * delbeg(struct node *x)
{
  curr=x;
            if( x==NULL)
            {
              printf("the node is empty");
              return x;
            }

             else if( curr->next==NULL)
             {
              printf("your deleting the final node ");
              x=NULL;
              free(curr);
              return x;
             }
              
             else
             {
              x=x->next;
              curr->next=NULL;
              free(curr);
              return x;

             }
}

void delpos(struct node *x)
{
  int c=1,pos;
  curr=x;
  printf("enter the pos");
  scanf("%d",&pos);
          while(curr->next!=NULL)
          {
            c++;
            if(c==pos)
            {
              temp=curr->next;
              curr->next=curr->next->next;
              free(temp);
              break;
            }
            curr=curr->next;
          }
}
 

void search(struct node *x)
{
  int key,flag=0;
  curr=x;
  printf("enter the key element");
  scanf("%d",&key);
                while(curr!=NULL)
                {
                  if(key==curr->n)
                  {
                    flag=1;
                    break;
                  }
                  curr=curr->next;
                }
if(flag==1)
{
  printf("element is found");
}
else
{
  printf("element is not found");
}
}
void  reverse(struct node *x)
{
  struct node *last;
  curr=x;
               while(curr->next!=NULL)
               {
                curr=curr->next;
               }
               printf("%d->",curr->n);
               last=curr;
               do 
               {
                curr=x;
                 while(curr->next!=last)
                 {
                  curr=curr->next;
                 }
                 last=curr;
                 printf("%d->",curr->n);
               }while(last!=x);
}