#include<stdio.h>
void main()
{
    int i,j,min,a[10],n,key,temp;
    printf("enter the size");
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        printf("enter value to array");
        scanf("%d",&a[i]);
     }
     printf("before sorting");
     for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
     for(i=0;i<n;i++)
     {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[j-1])
            {
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;

     }
     printf("after sorting");
     for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
}