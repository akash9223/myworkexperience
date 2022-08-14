#include<stdio.h>
int nextprime(int);
int main()
{
    int no,result;
    printf("enter a number ");
    scanf("%d",&no);
    result=prime(no);
    printf("next prime number is %d",result);
    getch();
    return 0;
}
int prime(int no)
{
    int s;
    if(no==1)
    {
        return 2;
    }
    no=no+1;
    while(no>=1)
    {
        for(int i=2;i<=no-1;i++)

        {
            s=no%i;
            if(s==0)
                break;
        }
        if(s!=0)
        {
            return no;
        }
        no++;
    }
}
