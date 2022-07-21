#include<stdio.h>
int main()
{
    int no;
    printf("enter number: ");
    scanf("%d",&no);
    if(no%2==0)
        printf("even number ");
    else
        printf("odd number ");
    getch();
    return 0;
}
