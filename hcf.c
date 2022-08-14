#include<stdio.h>
int hcf(int ,int);
int main()
{
    int a,b,result;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    result=hcf(a,b);
    printf("hcf is %d",result);
    getch();
    return 0;
}
int hcf(int a,int b)
{
    int n;
    int s;
    s=a;
    for( int i=1;i<=a;a--)
    {
        n=s%a;
        if(n==0&b%a==0)
            break;
    }
    return a;
}
