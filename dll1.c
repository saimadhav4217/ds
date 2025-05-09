#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *prev;
    int n;
    struct node *next;
};
struct node *curr,*temp;
struct node * create(struct node*);
struct node * insbeg(struct node*);
struct node * delbeg (struct node *);
struct node * delend(struct node *);
void display(struct node *);
void insend(struct node *);
void inspos(struct node *);
void reverse(struct node *);
void delpos (struct node *);
void main()
{
    struct node *s;
    int ch;
    s=NULL;
    do
   {
    printf("1.create \n 2.display\n 3.insend\n 4.insbeg\n 5.inspos\n 6 delpos\n 7 delbeg\n 8 delbeg\n 9 reverse");
    printf("enter your choice ");
    scanf("%d",&ch);
     switch(ch)
     {
      case 1 :   s=create(s);
                    break;
      case 2 :   display(s);
                    break;
      case 3 :   insend(s);
                    break;
      case 4 :    s=insbeg(s);
                    break;
      case 5 :    inspos(s);
                     break;
      case 6 :     delpos(s);
                     break;
      case 7 :     s=delbeg(s);
                     break;
      case 8 :     s=delend(s);
                     break;
      case 9 :      reverse(s);
                     break;
     }
   }while(ch!=10);


}


struct node * create(struct node *x)
{
                   if(x==NULL)
                   {
                    x=(struct node *)malloc(sizeof(struct node));
                    printf("enter the value ");
                    scanf("%d",&x->n);
                    x->prev=NULL;
                    x->next=NULL;
                    return x;
                   }
                   else
                   {
                    printf("the node is already created ");
                    return x;
                   }
}

void display(struct node *x)
{
     curr=x;
        while(curr!=NULL)
        {
            printf("%d->",curr->n);
            curr=curr->next;
        }
}

void insend(struct node *x)
{
    curr=x;
             while(curr->next!=NULL)
             {
                curr=curr->next;
             }
             temp=(struct node*)malloc(sizeof(struct node));
             printf("enter the value");
             scanf("%d",&temp->n);
             curr->next=temp;
             temp->prev=curr;
             temp->next=NULL;

            
}

void inspos(struct node*x)
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
                    temp=(struct node*)malloc(sizeof(struct node));
                    printf("enter the valur");
                    scanf("%d",&temp->n);
                    temp->prev=curr;
                    temp->next=curr->next;
                    curr->next=temp;
                    break;
                }
                curr=curr->next;
             }
             
}

struct node * insbeg(struct node *x)
{
   curr=x;
                  if(x==NULL)
                  {
                     printf("the list is empty");
                     return x;
                  }
                  else if(curr->next==NULL)
                  {
                     printf("your deleting the final node");
                     x=NULL;
                     curr->next=NULL;
                     free(curr); 
                     return x;
                  }
                  else 
                  {
                    temp=(struct node *)malloc(sizeof(struct node));
                    printf("enter the value");
                    scanf("%d",&temp->n);
                    temp->next=x;
                    x->prev=temp;
                    temp->prev=NULL;
                    return temp;
                  }

}

void delpos(struct node *x)
{
    int c=1,pos;
    curr=x;
    printf("enter the value" );
    scanf("%d",&pos);
                   while(curr->next!=NULL)
                   {
                    c++;
                       if(c==pos)
                       {
                        temp=curr->next;
                        curr->next->next->prev=curr;
                        curr->next=curr->next->next;
                        temp->prev=NULL;
                        temp->next=NULL;
                        break;
                       }
                       curr=curr->next;
                   }
}

struct node * delbeg(struct node *x)
{
    curr=x;
                if(x==NULL)
                {
                    printf("list is empty");
                    return x;
                }
                else if (curr->next==NULL)
                {
                  printf("your ara deleting the final node ");
                  x=NULL;
                  curr->next=NULL;
                  free(curr);
                  return x;
                }
                
}

struct node * delend(struct node*x)
{
    struct node *pr ;  
    curr=x;
                 if(x==NULL)
                 {
                    printf(" list is empty ");
                    return x;
                 }
                 else if(curr->next==NULL)
                 {
                    printf("your deleting the final node");
                    x=NULL;
                    free(curr);
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
                    curr->prev=NULL;
                    
                    free(curr);
                    return x;
                    
                 }
}
 void reverse(struct node *x)
 {
   curr=x;
            
            
               while(curr->next!=NULL)
               {
                  curr=curr->next;
               }

             while (curr!=NULL)
             {
               printf("%d->",curr->n);
               curr=curr->prev;
             }         
            
 }