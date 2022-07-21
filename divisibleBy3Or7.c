#include<stdio.h>
int main()
{
    int no;
    printf("enter no");
    scanf("%d",&no);
    if(no%3==0||no%7==0)
       printf("divisible by 3 OR 7");
    else
        printf("Not divisible by 3 or 7");
    getch();
    return 0;

}
