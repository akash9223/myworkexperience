#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,result;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    result=lcm(a,b);
    printf("lcm of two no is %d",result);
    getch();
    return 0;
}
int lcm(int a,int b)
{
    int i=1;
    int n;
    for(int i=1;i>=0;i++)
    {
        n=a*i;
        if(n%b==0)
        {
            break;
        }

    }
    return n;
}
