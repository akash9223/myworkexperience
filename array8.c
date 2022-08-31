#include<stdio.h>
int main()
{
    int n,p=0, s=0;
    printf("enter the size of array ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        {
            p=a[i+1];
            a[i+1]=a[i];
            a[i]=p;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        p=a[i+1];
        a[i+1]=a[i];
        a[i]=p;
    }
    printf("%d",a[n-1]);


}
