#include<stdio.h>
void sortarray(int[],int);
int main()
{
   int n;
   printf("enter size of array ");
   scanf("%d",&n);
   int  a[n];
   sortarray(a,n);
   getch();
   return 0;
}
void sortarray(int b[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf(" %d ",b[i]);
    }
}
