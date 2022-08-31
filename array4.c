#include<stdio.h>
int main()
{
    int num[10],g=0;
    printf("enter 10 number ");
    for(int i=0;i<=9;i++)
    {
    scanf("%d",&num[i]);
    if(num[i]>g)
        g=num[i];

    }
    printf("greatest number is %d",g);

}
