#include<stdio.h>
int fact(int);
int main()
{
    int no,result;
    printf("enter number ");
    scanf("%d",&no);
    result=fact(no);
    printf("factorial is %d",result);
    getch();
    return 0;
}
int fact(int no)
{
    int s=1;
    for(int i=1;i<=no;i++)
    {
        s=s*i;
    }
    return s;
}
