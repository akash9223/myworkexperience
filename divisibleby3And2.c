#include<stdio.h>
int main()
{
    int no;
    printf("enter number: ");
    scanf("%d",&no);
    if(no%3==0&no%2==0)
        printf("divisible by 3 and 2");
    else
        printf("Not divisible by 2 and 3");
    getch();
    return 0;
}
