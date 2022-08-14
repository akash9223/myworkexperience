#include<stdio.h>
void squire(int);
int main()
{
    int no;
    printf("enter no ");
    scanf("%d",&no);
    squire(no);
}
void squire(int no)
{
    if(no<1)
        return;
    squire(no-1);
    printf(" %d ",no*no);
}
