#include<stdio.h>
void odd(int);
int main()
{
    int no;
    printf("enter no ");
    scanf("%d",&no);
    no=no*2-1;
    odd(no);
    getch();
    return 0;
}
void odd(int no)
{
    if(no<1)
    {
        return  ;
    }
    odd(no-2);
    printf("%d",no);
}
