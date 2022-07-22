#include<stdio.h>
int main()
{
    int s=2;
    int n;
    printf("enter N even netural no ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",s);
        s=s+2;
    }
    getch();
    return 0;
}
