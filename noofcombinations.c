#include<stdio.h>
int combination(int,int);
int main()
{
    int no,result,r;
    printf("enter the value of n and r ");
    scanf("%d%d",&no,&r);
    result=conbination(no,r);
    printf("combination is %d",result);
}
int conbination(int no,int r)
{
    int s=1;
    int p=no-r;
    int k=1;
    int a=1;
for(int i=1;i<=no;i++)
{
    s=s*i;
}
for(int i=1;i<=p;i++)
{
    k=k*i;
}
for(int i=1;i<=r;i++)
{
    a=a*i;
}

return s/k*a;

}
