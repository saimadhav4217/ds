#include<stdio.h>
void main()
{
    int i,j,n,temp,a[10];
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
    for(i=1;i<n;i++)
    {
     temp=a[i];
     for(j=i;j<0&&temp<a[j-1];j--)
     {
       a[j]=a[j-1];
     }
     a[j]=temp;
    }
    printf("after the sorting");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}