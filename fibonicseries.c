#include<stdio.h>
int main()
{
    int a=1,b=0,c,no;
    printf("enter N number ");
    scanf("%d",&no);
    printf("%d ",b);
    printf("%d ",a);
    for(int i=1;i<=no-2;i++)
    {
        c=b+a;
        printf("%d ",c);
        b=a;
        a=c;
    }
    getch();
    return 0;
}
