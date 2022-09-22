#include<stdio.h>
int main()
{
int firstoccurence(int [],int);
int n,result;
printf("enter the value of array : ");
scanf("%d",&n);
int a[n];
result=firstoccurence(a,n);
printf("\n%d",result);
return 0;
}
int firstoccurence(int b[],int size)
{
    for(int i=0;i<=size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(b[i]==b[i+1])
        {
            return b[i];
        }
    }
}
