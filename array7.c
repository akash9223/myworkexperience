#include<stdio.h>
int main()
{
    int n,p=0,s=0;
    printf("enter the size of array ");
    scanf("%d",&n);
    int no[n];
    printf("enter %d number ",n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&no[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(no[i]>=no[i+1])
        {
        p=no[i+1];
        no[i+1]=no[i];
        no[i]=p;
        }

    }
   s=no[0];
   for(int i=0;i<n-1;i++)
   {
       if(no[i]>=s)
        s=no[i];
   }
   printf("second largest number is %d",s);


}
