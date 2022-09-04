#include<stdio.h>
#include<conio.h>
int smaller(int[],int);
int main()
{
    int n,result;
    int a[n];
    printf("enter N number ");
    scanf("%d",&n);
    result=smaller(a,n);
    printf("smaller number is %d",result);
    getch();
}
int smaller(int b[],int n)
{
    int s;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    s=b[0];
    for(int i=0;i<n;i++)
    {
        if(b[i]<=s)
            s=b[i];
    }
    return s;
}
