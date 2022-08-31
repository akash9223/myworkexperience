#include<stdio.h>
int main()
{
    int a[10];
    int s=0;
    printf("enter 10 number ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
           if(a[i]>=a[j])
           {
               s=a[i];
               a[i]=a[j];
               a[j]=s;
           }
        }
    }
    for(int i=0;i<=9;i++)

        {
            printf(" %d ",a[i]);
        }


}
