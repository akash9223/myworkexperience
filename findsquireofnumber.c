#include<stdio.h>
int squire(int);
int main()
{
    int no,result;
    printf("enter number ");
    scanf("%d",&no);
    result=squire(no);
    printf("squire is %d",result);
    getch();
    return 0;
}
int squire(int no)
{
    int s;
    s=no*no;
    return s;
}
