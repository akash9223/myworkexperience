#include<stdio.h>
int sum(int);
int main()
{
    int no,result;
    printf("enter number ");
    scanf("%d",&no);
    result=sum(no);
    printf("sum is %d",result);
    getch();
}
int sum(int no)
{
    int s;
    if(no<=1)
        return no;
    s=no+sum(no-1);
    return s;
}
