#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
 int n;
 struct node *left;
 struct node *right;
};
struct node *temp,*curr,*pr;
int count=0;
struct node * create(struct node *);
void preorder(struct node *);
void postorder(struct node *);
void inorder(struct node *);
void insert(struct node *);
struct node * delete (struct node *);
struct node * findmax(struct node *);
struct node * findmin(struct node *);
void search(struct node *);
void findcount(struct node *);

void main()
{
int ch ;
struct node *s=NULL;
   do
   {
    printf("1.create\n 2.insert\n 3.preorder\n 4.inorder\n 5.postorder\n 6.delete\n 7.search\n 8.count\n9.exit\n");
    printf("enter your choice");
    scanf("%d",&ch);
     switch(ch)
     {
      case 1 : s=create(s);
               break;
      case 2 : insert(s);
               break;
      case 3 : preorder(s);
               break;
      case 4 : inorder(s);
               break;
      case 5 : postorder(s);
               break;
      case 6 : s=delete(s);
                break;
      case 7 : search(s);
                break;
      case 8 : findcount(s);
               break;
     }



   } while (ch!=9);
   
}
struct node * create(struct node *x)
{
  if(x==NULL)
  {
    x=(struct node *)malloc(sizeof(struct node));
    printf("enter the value");
    scanf("%d",&x->n);
    x->left=NULL;
    x->right=NULL;


  }
  else
  {
    printf("the node is already created");

  }
  return x;
}
void preorder(struct node *x)
{

  if(x!=NULL)
  {

    count++;
    printf("%d",x->n);
    preorder(x->left);
    preorder(x->right);

  }
}
void postorder(struct node *x)
{
  if(x!=NULL)
  {
    postorder(x->left);
    postorder(x->right);
    printf("%d",x->n);

  }
}
void inorder(struct node *z)
{
 
 if(z!=NULL)
 {
  
  inorder(z->left);
  printf("%d",z->n);
  inorder(z->right);
 } 
}
 void insert(struct node *z)
 {
  curr=z;
   temp=(struct node *)malloc(sizeof(struct node ));
   printf("enter the value ");
   scanf("%d",&temp->n);
   temp->left=NULL;
   temp->right=NULL;
      

   while(curr!=NULL)
   {
    if(temp->n==curr->n)
    {
      printf("duplicate values does not exist ");
      break;

    }
    else if(temp->n<curr->n)
    {
      if(curr->left==NULL)
      {
        curr->left=temp;
        break;
      }
      else
      {
        curr=curr->left;
      }
    }
    else
    {
      if(curr->right==NULL)
      {
        curr->right=temp;
        break;
      }
      else
      {
        curr=curr->right;
      }
    }
   }
 }
 struct node* delete(struct node *x)
 {
  curr=x;
  int se;
  pr=NULL;
  printf("enter the  value to delete");
  scanf("%d",&se);

  if(curr==NULL)
  {
    printf("no node to be delete ");
  }
  else
  {
   while(curr!=NULL)
   {
   if(se>curr->n)
   {
    if(curr->right==NULL)
    {
      printf("no node to be delete in tree");
    }
    else
    {
      pr=curr;
       curr=curr->right;
       
    }
  }
  else if(se<curr->n)
  {
    if(curr->left==NULL)
    {
      printf("no node to be delete in tree");

    }
    else
    {
      pr=curr;
      curr=curr->left;
    }
  }
  else if(se==curr->n)
  {
    if((curr->left==NULL)&& (curr->right==NULL))
    {
      if(pr->left==curr)
      {
        pr->left==NULL;
      }
      else if(pr->right==curr)
      {
        pr->right==NULL;
      }
      else if(pr==NULL)
      {
        curr=NULL;
        free(curr);
        return x;
      }
      free(curr);
      return x;
    }
    else if ((curr->left!=NULL)&&(curr->right==NULL))
    {
      if(pr->left==curr)
      {
        pr->left=curr->left;
      }
      else if(pr->right==curr)
      {
        pr->right=curr->left;
      }
      free(curr);
      return x;
    }
    else if((curr->left==NULL)&&(curr->right!=NULL))
    {
      if(pr->left==curr)
      {
        pr->left=curr->right;
      }
      else if(pr->right==curr)
      {
        pr->right=curr->right;
      }
      free(curr);
      return x;
    }
    else if((curr->left!=NULL)&&(curr->right!=NULL))
    {
      struct node *dup;
      dup = findmin(curr->right);
      curr->n=dup->n;
      dup=NULL;
      free(dup);
       return x;                              /*  In this case  find max value in left sub tree replace
                                     replace the curr with the value and delete maxvalue 
                                                            or 
                                     In this case  find min value in right sub tree replace
                                     replace the curr with the value and delete minvalue */ 
    }
  }

 }
}
 }
 struct node *  findmin(struct node *x)
 {
  curr=x;
    while(curr!=NULL)
    {
      curr=curr->left;
    }
    return curr;
 }
 struct node *  findmax(struct node *x)
 {
  curr=x;
   while(curr!=NULL)
   {
    curr=curr->right;
   }
   return curr;

 }
 void search(struct node *x)
 {
   curr=x;
   int se;
   printf("enter the search element");
   scanf("%d",&se);
    while(curr!=NULL)
    {
        if(curr->n==se)
        {
          printf("the element is found");
          break;
        }
        else if(curr->n<se)
        {
          curr=curr->right;
        }
        else if(curr->n>se)
        {
          curr=curr->left;
        }
    }
    if(curr==NULL)
    {
      printf("the element is not found");
    }
 }
 void findcount(struct node *x)
 {
  count =0;
   preorder(x);
   printf("the number of nodes is %d",count);
 }