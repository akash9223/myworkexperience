#include<stdio.h>
int main()
{
    int a[3][3],j,sum=0;
    printf("enter 3*3 matrix: ");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<=2;i++)
    {
        sum=sum+a[i][j];
        j++;
    }
    printf("sum of left diagolans of matrix is : %d",sum);
}
