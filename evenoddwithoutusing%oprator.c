#include<stdio.h>
int main()
{
    int no,a;
    printf("enter number : ");
    scanf("%d",&no);
    a=no/2;
    if(a*2==no)
        printf("even number");
    else
        printf("odd number ");
    getch();
    return 0;
}
