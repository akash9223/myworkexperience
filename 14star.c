#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j>=1&j<=1||j>=i&j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int j=1;j<=5;j++)
    {
        printf("*");
    }
    getch();
}
