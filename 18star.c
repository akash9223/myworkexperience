#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(i<=5)
            {
                if(j>=6-i&j<=4+i)
                    printf("*");
                else
                    printf(" ");
            }
            if(i>=6&i<=9)
            {
                if(j>=i-4&j<=14-i)
                printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
