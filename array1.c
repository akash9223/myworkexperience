#include<stdio.h>
int main()
{
    int num[10],sum;
    printf("enter 10  number ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("sum is %d",sum);
    for(int i=0;i<=9;i++)
    {
        printf("\n%d",num[9-i]);
    }
    getch();
    return 0;
}
