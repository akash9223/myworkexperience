#include<stdio.h>
int main()
{
    int no=1,s;
    while(no<100)
    {
        for(int i=2;i<=no-1;i++)
        {
            s=no%i;
            if(s==0)
                break;
        }
        if(s!=0)
        {
            printf("%d ",no);
        }
        no++;
    }
    getch();
    return 0;
}
