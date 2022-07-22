#include<stdio.h>
int main()
{
    int s=5;
    int table;
    for(int i=1;i<=10;i++)
    {
        table=s*i;
        printf("%d\n",table);
    }
    getch();
    return 0;
}
