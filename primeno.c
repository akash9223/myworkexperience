#include<stdio.h>
int prime(int);
int main()
{
    int no,result;
    printf("enter no ");
    scanf("%d",&no);
    result=prime(no);
    if(result==1)
    printf("prime number ");
    if(result!=1)
    {
        printf("Not prime no");
    }

}
int prime(int no)
{

    int s;
    for(int i=2;i<=no-1;i++)
    {
        s=no%i;
        if(s==0)
            break;
    }
    if(s!=0||no==1||no==2)
        {
            return 1;
        }
}
