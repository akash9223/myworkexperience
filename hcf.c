#include<stdio.h>
int main()
{
    int a,b,l,c,m,i;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        l=a;
        c=b;
    }
    if(b>a)
    {
        l=b;
        c=a;
    }
    i=c;
    for(c;c>=1;c--)
       {
       if(l%c==0&&i%c==0)
       {
           printf("hcf is %d",c);
           break;
       }

       }
       getch();
       return 0;



}
