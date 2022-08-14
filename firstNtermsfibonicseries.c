#include<stdio.h>
void fibonic(int);
int main()
{
    int N;
    printf("enter number ");
    scanf("%d",&N);
    fibonic(N);
    getch();
    return 0;
}
void fibonic(int N)
{
    int a=0,b=1;
    int s;
    printf("%d %d",a,b);
    for(int i=1;i<=N-2;i++)
    {
        s=a+b;
        printf(" %d ",s);
        a=b;
        b=s;
    }
    return 0;
}
