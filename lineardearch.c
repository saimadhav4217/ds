#include<stdio.h>
void main()
{
    int a[10],n,i,flag=0,key;
    printf("enter the value of an array");
    scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("enter the value  to array");
                scanf("%d",&a[i]);
            }
    printf("enter search element ");
    scanf("%d",&key);
            for(i=0;i<n;i++)
            {
                if(key==a[i])
                {
                    flag=1;
                    break;
                }
            }
    if(flag==1)
    printf("the value found at postion %d ",i);
    else
    printf("the value not found");
}