#include<stdio.h>
int evenodd(int);
int main()
{
    int no,result;
    printf("enter number ");
    scanf("%d",&no);
    result=evenodd(no);
    if(result==1)
        printf("even");
    else
    {
        printf("odd");
    }
    getch();
    return 0;
}
int evenodd(int no)
{
    if(no%2==0)
        return 1;
    else
        return 0;
}
