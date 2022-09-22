#include<stdio.h>
void unique(int[],int);
int main()
{
    int n;
    printf("enter how many element you want to enter : ");
    scanf("%d",&n);
    printf("enter %d element ",n);
    int a[n];
    unique(a,n);
    return 0;
}
void unique(int b[],int size)
{
    int s;
    for(int i=0;i<=size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<=size;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            s=b[j];
            if(b[i]==s)
                {
                    break;
                }
        }
        if(b[i]!=s)
        {
            printf("\n%d",b[i]);
        }

    }
}
