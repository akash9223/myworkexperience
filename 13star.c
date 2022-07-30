#include<stdio.h>
int main()
{
    for(int i=1;i<=7;i++)
    {
        char a='@';
        for(int j=1;j<=13;j++)
        {
            if(j>=1&j<=8-i)
            {
                a=a+1;
            }

            if(j>6+i&j<=13)
            {
                a=a-1;
            }
            if(j>=1&j<=8-i||j>=6+i&j<=13)
                    printf("%c",a);
             else
                   printf(" ");
        }
        printf("\n");
    }
}
