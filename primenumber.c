#include<stdio.h>
int main()
{
    int no,s;
    printf("enter number ");
    scanf("%d",&no);
    for(int i=2;i<=no-1;i++)
    {
        s=no%i;
        if(s==0)
            break;
    }
    if(s!=0||no==1||no==2)
        printf("prime number ");
    else
        printf("not prime number ");

}
