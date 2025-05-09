#include<stdio.h>
void quick(int a[],int ,int ); 
void  main()
{
    int i,n,a[10];
    printf("enter the size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter values to array" );
        scanf("%d",&a[i]);
    }
    printf("before sorting ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    quick(a,0,n-1);
    printf("after sorting");
    for(i=0;i<n;i++)
    {
     printf(" %d",a[i]);
    }
}
 void quick( int a[],int low,int high)
 {
    int i,j,poviot,temp;
      if(low<high)
      {
      poviot=a[low];
      i=low;
      j=high;
             while(i<j)
             {
              while(a[i]<=poviot)
              {
               i++;
              }
              while(a[j]>poviot)
              {
                j--;
              }
              if(i<j)
              {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
              }
            }
              temp=a[low];
              a[low]=a[j];
              a[j]=temp;
              quick(a,low,j-1);
              quick(a,j+1,high);


              
      }
      
 }