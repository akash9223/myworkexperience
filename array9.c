#include<stdio.h>
int main()
{
    int i,n;
    printf("\\enter how many number you want to enter  //");
    scanf("%d",&n);
    int a[n];
    printf("enter your number");
    for( i=0;i<=n;i++)
    {
           scanf("%d",&a[i]);



    }
    for( i=n;i>=0;i--)
    {
        printf(" %d ",a[i]);
    }

}
