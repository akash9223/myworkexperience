#include<stdio.h>
void oddno(int);
int main()
{
    int no,result;
    printf("enter no ");
    scanf("%d",&no);
    oddno(no);
    getch();
    return 0;
}
void oddno(int no)
{
    int s=1;
    for(int i=1;i<=no;i++)
    {
        printf("%d",s);
        s=s+2;
    }
}
