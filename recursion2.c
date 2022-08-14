#include<stdio.h>
void reverse(int);
int main()
{
    int no;
    printf("enter number ");
    scanf("%d",&no);
    reverse(no);
    getch();
    return 0;
}
void reverse(int no)
{
    printf("%d",no);
    if(no<=1)
        return ;
    reverse(no-1);
}
