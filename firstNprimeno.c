#include<stdio.h>
void firstNprimeno(int);
int main()
{
    int N;
    printf("enter no ");
    scanf("%d",&N);
    firstNprimeno(N);
    getch();
    return 0;
}
void firstNprimeno(int N)
{
    int a,count=2;
    printf(" 1 2 ");
    for(int i=1;i>=0;i++)
    {
        for(int j=2;j<=i-1;j++)
        {
            a=i%j;
            if(a==0)
                break;
        }
        if(a!=0)
        {
            printf(" %d ",i);
            count++;
            if(count==N)
            {
                break;
            }
        }
    }
}
