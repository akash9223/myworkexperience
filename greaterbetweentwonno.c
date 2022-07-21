#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("greater number is %d",a);
    if(a==b)
        printf("greater number is %d",a);
    else
        printf("greater number is %d",b);
    getch();
    return 0;
}
