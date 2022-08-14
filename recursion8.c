#include<stdio.h>
void binary(int);
int main()
{
    int no;
    printf("enter number ");
    scanf("%d",&no);
    binary(no);
}
void binary(int no)
{
    if(no==1)
        return;
    binary(no/2);
    if(no/2==1)
        printf("1");
    printf("%d",no%2);
}
