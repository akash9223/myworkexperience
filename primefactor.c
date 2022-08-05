#include<stdio.h>
void primefactor(int);
int main()
{
    int no;
    printf("enter no ");
    scanf("%d",&no);
    primefactor(no);
    getch();
    return 0;
}
void primefactor(int no)
{
  int s;
    for(int i=3;i<=no;i++)
    {
        for(int j=2;j<=i-1;j++)
        {
            s=i%j;
            if(s==0)
                break;
        }
        if(s!=0)
        {
            if(no%i==0)
                printf("%d",i);



        }
    }
    if(no%2==0)
    {
        printf("2");
    }

}
