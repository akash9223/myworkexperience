#include<stdio.h>
void neturalno(int);
int main()
{
    int N;
    printf("enter N number ");
    scanf("%d",&N);
    neturalno(N);
    getch();
    return 0;
}
void neturalno(int N)
{
    for(int i=1;i<=N;i++)
    {
        printf("%d",i);
    }
}

