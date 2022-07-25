#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter N netural no ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("%d",sum);

    return 0;
}
