#include<stdio.h>
int main()
{
    int no,a=0,b=1,c;
    printf("enter number ");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(no==c)
        {

            break;
        }

    }
    if(no==0||no==1||no==3||no==c)
    {
        printf("fibonic number ");
    }
    if(no!=c)
    {
        printf("not fobonic number ");
    }

}
