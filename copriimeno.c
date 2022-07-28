#include<stdio.h>
int main()
{
    int a,b,c,l,d,e;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        c=a;
        l=b;
    }
    if(b<a)
    {
        c=b;
        l=a;
    }
    for(int i=2;i<=c;i++)
    {
        d=c%i;
        e=l%i;
        if(d==0&e==0)
        {
            printf("%d and %d are not coprime number ",c,l);
            break;
        }
    }
    if(d!=e)
    {
        printf("%d and %d are coprime number ",c,l);
    }
    getch();
    return 0;
}
