#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n;
    struct node *next;
};
struct node *curr,*temp;
void main()
{
    struct node *s;
    int ch;
    s=NULL;
    do
    {
     printf(" 1.create\n 2.display\n 3.insend\n");
     printf("enter your choice ");
     scanf("%d",&ch);
               switch(ch)
               {
                case 1 :  s=create(s);
                            break;
                case 2 :  display(s);
                            break;
                case 3 :  insend(s);
                            break;
               }
    } while (ch!=11);
    
}


struct node * create(struct node *x)
{
                   if(x==NULL)
                   {
                    x=(struct node *)malloc(sizeof(struct node));
                    printf("enter the value ");
                    scanf("%d",x->n);
                    x->next=x;
                    return x;
                   }
                   else
                   {
                    printf("tthe node is already created");
                    return x;
                   }
}

void display(struct node *x)
{
    curr=x;
                          do
                          {
                            printf("%d",curr->n);
                            curr=curr->next;
                          } while (curr!=x);
                          
}

void insend(struct node *x)
{
    curr=x;
            while(curr->next!=x)
            {
                curr=curr->next;
            }
            temp=(struct node *)malloc(sizeof(struct node));
            printf("enter the value");
            scanf("%d",&temp->n);
            curr->next=temp;
            temp->next=x;

}
 
struct node * insbeg(struct node *x)
{
    curr =x;
             while(curr->next!=x)
             {
               curr=curr->next;
             }
              temp=(struct node *)malloc(sizeof(struct node ));
              printf("enter the valur");
              scanf("%d",&temp->n);
              temp->next=x;
              curr->next=temp;
              return temp;      
}

struct node * delbeg(struct node *x);
{  
    temp= curr =x;
            if(x==NULL)
            [
                printf("their is no node to delete ");
                return x;
            ]
            else if(curr->next==x)
            {
              printf("your deleting the final node ");
              curr->next = NULL;
              x=NULL;
              free(curr);
              return x;

            }

             else
             {
                while(curr->next!=x)
                {
                 curr=curr->next;
                }
                x=x->next;
                temp->next=NULL;
                free(temp);
                curr->next=x;
                
             }
            
}
void inspos(struct node*x)
{
    int c=1,pos;
    curr=x;
    printf("enter the postion");
    scanf("%d",&pos);
                       while(curr->next!=x)
                       {
                            if(c==pos)
                            {
                              temp=(struct node *)malloc(sizeof(struct node ));
                              printf("enter the valure");
                              scanf("%d".&temp->n);
                              temp->next=curr->next;
                              curr->next=temp;
                              break;                                
                            }
                        curr=curr->next;
                       }

}


