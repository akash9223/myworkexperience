#include<stdio.h>
int main()
{
    int s=1;
    int cube;
    for(int i=1;i<=10;i++)
    {
        cube=s*s*s;
        printf("%d\n",cube);
        s=s+1;
    }
    getch();
}
