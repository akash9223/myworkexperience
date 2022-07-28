#include<stdio.h>
int main()
{
    int a,b,c,l,s;
    printf("enter two no ");
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
    c=c+1;
    while(c<l)
    {
        for(int i=2;i<=c-1;i++)
            {
                s=c%i;
                if(s==0)
                    break;
            }
            if(s!=0||c==2||c==3)
            {
                printf("%d ",c);
            }
            c++;
    }
    getch();
    return 0;
}
