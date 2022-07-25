#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter N even netral number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*2;
    }
    printf("%d",sum);
    getch();
    return 0;
}
