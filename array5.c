#include<stdio.h>
int main()
{
    int num[10];
    int smallest=num[0];
    printf("enter 10 number ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<=smallest)
        smallest=num[i];
    }
    printf("smallest number is %d",smallest);
    getch();
    return 0;
}
