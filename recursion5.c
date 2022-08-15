#include<stdio.h>
int digitsum(int);
int main()
{
    int no,result;
    printf("enter number ");
    scanf("%d",&no);
    result=digitsum(no);
    printf("sum of digit is %d",result);
    getch();
    return 0;
}
int digitsum(int no)
{
    int s;
    if(no<10)
        return no;
    s=no%10+digitsum(no/10);
    return s;
}
