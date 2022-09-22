#include<stdio.h>
int main()
{
    int a[10],count=1;
    printf("enter 10 number : ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=8;i++)
    {
        count=1;
        for(int j=i+1;j<=7;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }

        printf(" %d ",a[i]);
        printf("%d time\n",count);
    }
}
