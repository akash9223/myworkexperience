#include<stdio.h>
int main()
{
    int n;
    printf("\\ enter the number of element you want to enter //");
    scanf("%d",&n);
    int a1[n];
    int a2[n];
    printf("enter your  number ");
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a1[i]);
        a2[i]=a1[i];

    }
    for(int i=0;i<=n;i++)
    {
        printf(" %d ",a2[i]);
    }
}
