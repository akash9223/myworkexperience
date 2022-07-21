#include<stdio.h>
int main()
{
    int no;
    int a;
    printf("enter number : ");
    scanf("%d",&no);
    a=no%100;
    if(a<100)
        printf("three digit ");
    else
        printf("not three digit");
}
