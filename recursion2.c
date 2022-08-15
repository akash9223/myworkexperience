#include<stdio.h>
int  evensum(int no);
int main()
{
    int no,result;
    printf("enter number ");
    scanf("%d",&no);
    no=no*2;
    result=evensum(no);
    printf("sum of even no is %d",result);
    getch();
    return 0;
}
int evensum(int no)
{
    int s;
    if(no<=2)
        return no;
    s=no+evensum(no-2);
    return s;
}
