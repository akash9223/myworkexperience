#include<stdio.h>
void merge(int[],int,int[],int,int[],int);
int main()
{
  int a[5];
  int b[5];
  int c[10];
  merge(a,5,b,5,c,10);
}
void merge(int b[],int size,int c[],int ok,int d[],int yes)
{
int j=0;
int temp=0;
printf("enter 5 number: ");
for(int i=0;i<=size;i++)
{
    scanf("%d",&b[i]);
    d[j]=b[i];
    j++;
}
printf("enter 5 number: ");
for(int i=0;i<=ok;i++)
{
    scanf("%d",&c[i]);
    d[j]=c[i];
    j++;
}
for(int j=0;j<=8;j++)
{
    for(int i=j+1;i<=9;i++)
    {
        if(d[i]<d[j])
        {
            temp=d[j];
            d[j]=d[i];
            d[i]=temp;
        }
    }
}
for(int j=0;j<=9;j++)
{
    printf(" %d ",d[j]);
}
}
