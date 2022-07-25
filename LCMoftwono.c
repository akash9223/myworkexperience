#include<stdio.h>
int main()
{
    int a,b,s,l,m,k;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        m=b;
         s=a;
    }
    if(b<a)
    {
        m=a;
        s=b;
    }
    for(int i=2;i<=s+m;i++)
    {
        k=m%i;
        l=s%i;
        if(k==0||l==0)
            break;

    }
    if(k!=0||l!=0)
    {
        printf("lcm is %d",m*s);
    }
    else
    {
    if(m%s==0)
    {

       printf("lcm is %d",m);
    }
    if(m%s!=0)
    {
        printf("%d",m*2);

    }
    }






}
