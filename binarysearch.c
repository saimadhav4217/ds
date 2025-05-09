#include<stdio.h>
void main()
{
    int n,i,mid,low=0,a[10],high,key;
    printf("enter the size of array");
    scanf("%d",&n);
       for(i=0;i<n;i++)
       {
        printf("enter the value to array");
        scanf("%d",&a[i]);
       }
       printf("enter the key element");
       scanf("%d",&key);
             high=n-1;
              while(low<=high)
              {
                mid=high+low/2;
                if(key==a[mid])
                {
                    printf("the value is found at %d postion",mid);
                    break;
                }

                else if(key<a[mid])
                {
                    high=mid-1;
                }
                else 
                {
                    low=mid+1;
                }
              }

}