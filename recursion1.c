#include<stdio.h>
int main()
{
   void print(int);
   int no;
   printf("enter number ");
   scanf("%d",&no);
   print(no);
   getch();
}
void print(int no)
{
    if(no==0)
        return ;
    print(no-1);
    printf("%d",no);
}
