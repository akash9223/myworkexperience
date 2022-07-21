#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&a>c)
        printf("greater is %d",a);
    if(b>a&b>c)
        printf("greater is %d",b);
    if(c>a&c>b)
        printf("greater is %d",c);
    if(a==b||b==c)
        printf("greater numbe is %d",a);
    if(a==c||c==b)
        printf("greater number is %d",c);
    getch();
    return 0;

}
