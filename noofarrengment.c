#include<stdio.h>
int arrangment(int ,int);
int main()
{
    int no,r,result;
    printf("enter value of n and r ");
    scanf("%d%d",&no,&r);
    result=arrangment(no,r);
    printf("arrangmet is %d",result);
    getch();
    return 0;
}
int arrangment(int no,int r)
{
    int s=1;
    int k=no-r;
    int p=1;
    for(int i=1;i<=no;i++)
    {
        s=s*i;
    }
    for(int i=1;i<=k;i++)
    {
        p=p*i;
    }
    return s/p;

}
