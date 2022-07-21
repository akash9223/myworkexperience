#include<stdio.h>
int main()
{
    int no;
    printf("enter number : ");
    scanf("%d",&no);
    if(no&1==1)
        printf("odd");
    else
        printf("even");
    getch();
    return 0;
}
