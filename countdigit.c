#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       n= n%i;
       count=count+1;

    }
        printf("digit is %d",count);
}
