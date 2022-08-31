#include<stdio.h>
int main()
{
    int num[10],esum=0,osum=0;
    printf("enter 10 number ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            esum=esum+num[i];
        }
        if(num[i]%2!=0)
        {
            osum=osum+num[i];
        }
    }
    printf("sum of even number is %d",esum);
    printf("\nsum of odd number is %d",osum);
}
