#include<stdio.h>
int main()
{
    int n;
    printf("Enter N netural number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i*i*i);
    }
     getch();
     return 0;
}
