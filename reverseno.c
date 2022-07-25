#include<stdio.h>
int main()
{
    int no,s;
    printf("enter no ");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
        s=no%10;
        printf("%d",s);
        no=no/10;

    }
    getch();
    return 0;
}
