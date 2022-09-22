#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int s=0,d;
    printf("enter 9 number ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter 9 number : ");
    for(int k=0;k<=2;k++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&b[k][j]);
        }
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            for(int k=0;k<=2;k++)
            {
                s=0;
                d=0;
                for(int j=0;j<=2;j++)
                {
                    d=a[i][j]*b[j][k];
                    s=s+d;

                }
                c[i][k]=s;
            }

        }

    }
    for(int i=0;i<=2;i++)
    {
        for(int k=0;k<=2;k++)
        {
            printf(" %d ",c[i][k]);
        }
    }

}
