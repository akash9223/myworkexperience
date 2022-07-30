#include<stdio.h>
int main()
{
    int a;
    for(int i=1;i<=4;i++)
    {
        a=0;
        for(int j=1;j<=7;j++)
        {
            if(j>=5-i&j<=4)
            {
                a=a+1;
            }
            if(j>=5&j<=3+i)
            {
                a=a-1;
            }
            if(j>=5-i&j<=3+i)
                printf("%d",a);
            else
                printf(" ");
        }
        printf("\n");
    }
}
