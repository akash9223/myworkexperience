#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        int a=0;
    for(int j=1;j<=7;j++)
    {
        if(j>=1&j<=4)
        {
            a=a+1;
        }
        else
        {
            a=a-1;
        }
        if(j>=1&j<=5-i||j>=3+i&j<=7)
            printf("%d",a);
        else
            printf(" ");
    }
    printf("\n");
    }
    getch();
    return 0;
}
