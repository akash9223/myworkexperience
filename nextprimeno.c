#include<stdio.h>
int main()
{
    int no,s;
    printf("enter number ");
    scanf("%d",&no);
    no=no+1;
    while(no>=1)
    {
        for(int i=2;i<=no-1;i++)
        {
            s=no%i;
            if(s==0)
                break;
        }
        if(s!=0||no==2)
        {
            printf("%d",no);
            break;
        }
        no++;
    }
    getch();
    return 0;
}
