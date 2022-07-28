#include<stdio.h>
int main()
{
    int no,a=0,b,n;
    printf("enter number ");
    scanf("%d",&no);
    n=no;
    for(int i=1;i<=no;i++)
    {
       b=no%10;
       if(no<10)
       {
           b=no;
       }
      b= b*b*b;
      b=a+b;
      if(b==n)
      {
          printf("armstrog number ");
      }
      a=b;
      no=no/10;



    }
    getch();
    return 0;



}
