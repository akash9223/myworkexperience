#include<stdio.h>
void rotatearray(int[],int);
int main()
{
    int a[10];
    rotatearray(a,10);
    getch();
     return 0;
}
void rotatearray(int b[],int size)
{
    int temp,d;
    printf("enter 10 number ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("enter how many number you want to rotate ");
    scanf("%d",&d);
    for(int j=1;j<=d;j++)
    {
        for(int i=0;i<9;i++)
        {
            temp=b[0];
            b[i]=b[i+1];
        }
    }
    for(int i=0;i<=9;i++)
    {
        printf(" %d ",b[i]);
    }
}
