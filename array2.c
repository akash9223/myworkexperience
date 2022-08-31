#include<stdio.h>
int main()
{
    int num[10],sum,avg;
    printf("enter 10 number ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    avg=sum/10;
    printf("average of 10 number %d ",avg);


}
