#include<stdio.h>
int squire(int);
int main()
{
    int no,result;
    printf("enter number ");
    scanf("%d",&no);
    result=squire(no);
   printf("sum of squire of  n netural no is %d",result);
   getch();
   return 0;
}
int squire(int no)
{
    int s;
    if(no<=1)
        return no;
    s=no*no+squire(no-1);
    return s;
}


