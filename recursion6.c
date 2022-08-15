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
    int s;
    if(no<=1)
        return no;
    s=no*fact(no-1);
    return s;
}
