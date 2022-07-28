#include<stdio.h>
int main()
{
    int no,a,b,c;
    printf("enter nth number ");
    scanf("%d",&no);
    a=0;
    b=1;

    for(int i=1;i<=no-2;i++)
    {

        c=a+b;
        a=b;
        b=c;
    }

      if(no==1)
      {
          c=0;
      }
      if(no==2)
      {
          c=1;
      }
      if(no==3)
      {
          c=1;
      }
    printf("nth term of number is %d ",c);


}
