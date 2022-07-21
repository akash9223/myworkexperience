#include<stdio.h>
int main()
{
    int number;
    printf("enter number ");
    scanf("%d",&number);
    if(number%5==0)
        printf("divisible by 5");
    else
        printf("not divisible by 5");
    getch();
    return 0;
}
