#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        int a=0;
        for(int j=1;j<=7;j++)
        {
            if(j>=i&j<=4)
            {
                a=a+1;
            }
            if(j>=5&j<=8-i)
            {
                a=a-1;
            }
            if(j>=i&j<=8-i)
                printf("%d",a);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
