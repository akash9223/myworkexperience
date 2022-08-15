#include<stdio.h>
int oddsum(int);
int main()
{
    int no,s;
    printf("enter n number ");
    scanf("%d",&no);
    no=no*2-1;
    s=oddsum(no);
    printf(" sum of number %d",s);
    getch();
    return 0;
}
int oddsum(int no)
{
    int a;
    if(no<=1)
        return no;
    a=no+oddsum(no-2);
    return a;
}
