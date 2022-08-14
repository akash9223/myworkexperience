#include<stdio.h>
void reverse(int);
int main()
{
    int no;
    printf("enter number ");
    scanf("%d",&no);
    no=no*2;
    reverse(no);
}
void reverse(int no)
{
    printf(" %d ",no);
    if(no<=2)
        return;
    reverse(no-2);
}
