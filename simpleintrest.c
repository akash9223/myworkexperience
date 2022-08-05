#include<stdio.h>
int simpleintrest(int,int,int );
int main()
{
    int p ,r,t;
    int result;
    printf("enter value of principle,rate of intrest and time ");
    scanf("%d%d%d",&p,&r,&t);
    result=simpleintrest(p,r,t);
    printf("simple intrest is %d",result);
    getch();
    return 0;
}
int simpleintrest(int p,int r,int t)
{
    return p*r*t/100;
}
