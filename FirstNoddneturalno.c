#include<stdio.h>
int main()
{
    int n;
    int s=1;
    printf("enter N number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",s);
        s=s+2;
    }
}
