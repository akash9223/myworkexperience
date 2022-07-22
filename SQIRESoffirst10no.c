#include<stdio.h>
int main()
{
    int s=1;
    int squire;
    for(int i=1;i<=10;i++)
    {
        squire=s*s;
        printf("%d\n",squire);
        s=s+1;
    }
}
