#include<stdio.h>
void rotate(int[],int);
int main()
{
    int s;
    printf("enter how many number you want to enter : ");
    scanf("%d",&s);
    int a[s];
    rotate(a,s);
}
void rotate(int b[],int size)
{
    int temp,n;
    printf("enter your number ");
    for(int i=0;i<=size;i++)
    {
    scanf("%d",&b[i]);
    }
    printf("\nenter the position value you want to rotate : ");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
    for(int i=0;i<size;i++)
    {
        temp=b[i];
        b[i]=b[i+1];
        b[i+1]=temp;
    }
    }
    for(int i=0;i<=size;i++)
    {
        printf(" %d ",b[i]);
    }
}
