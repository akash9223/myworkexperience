#include<stdio.h>
void even(int);
int main()
{
    int no;
    printf("enter no ");
    scanf("%d",&no);
    no=no*2;
    even(no);
}
void even(int no)
{
    if(no<2)
    {
        return;
    }
    even(no-2);
    printf("%d",no);
}
