#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
    printf("enter 3*3 matrix: ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("sum of rows : ");
    for(int i=0;i<=2;i++)
    {
        sum=0;
        for(int j=0;j<=2;j++)
        {
            sum=sum+a[i][j];
        }
        printf(" %d ",sum);
    }
    printf("\nsum of columuns: ");
    for( int i=0;i<=2;i++)
    {
        sum=0;
        for(int j=0;j<=2;j++)
        {
            sum=sum+a[j][i];
        }
        printf(" %d ",sum);
    }
}
