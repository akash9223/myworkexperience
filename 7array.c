#include<stdio.h>
int duplicate(int [],int);
int main()
{
    int n,result;
    printf("enter how many you want to enter: ");
    scanf("%d",&n);
    printf("enter %d number ",n);
    int a[n];
    result=duplicate(a,n);
    printf("\n%d",result);
    return 0;
}
int duplicate(int b[],int size)
{
    int count=1,temp;
    for(int i=0;i<=size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(b[i]!=b[i+1])
        {
        temp=b[i];
        b[i]=b[i+1];
        b[i+1]=temp;
        }
        if(b[i]==b[i+1])
        {
            count++;
        }
    }
    return count;
}
