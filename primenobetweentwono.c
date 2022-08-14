#include<stdio.h>
void pime(int);
int main()
{
    int a,b;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    prime(a,b);
    getch();
    return 0;
}
void prime(int a,int b)
{
    int s,n,y;
    if(a<b)
    {
        s=a;
        n=b;
    }
    if(b<a)
    {
        s=b;
        n=a;
    }
    if(s==1)
    {
        printf(" 2 ");
    }
    s=s+1;
    for( s;s<=n;s++)
    {
        for(int i=2;i<=s-1;i++)
        {
            y=s%i;
            if(y==0)
                break;
        }
        if(y!=0)
        {
            printf(" %d ",s);
        }
    }
}
