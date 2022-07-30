#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        char a='@';
        for(int j=1;j<=9;j++)
        {

            if(j>=6-i&j<=5)
                {
                    a=a+1;
                }
            if(j>=6&j<=4+i)
            {
                a=a-1;
            }

           if(j>=6-i&j<=4+i)
           printf("%c",a);
           else
            printf(" ");
        }
        printf("\n");
    }
}
