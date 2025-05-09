#include<stdio.h>
void main()
{
    int i,j,n,a[10],temp;
    printf("enter the size");
    scanf("%d",&n);
      for(i=0;i<n;i++)
      {
        printf("enter value to array");
        scanf("%d",&a[i]);
      }
      printf("before sorting ");
      for(i=0;i<n;i++)
      {
        printf("%d",a[i]);
      }

       for(i=0;i<n-1;i++)
       {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
       }
       printf("After sorting ");
      for(i=0;i<n;i++)
      {
        printf(" %d",a[i]);
      }
 
    }