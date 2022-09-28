#include<stdio.h>
int main()
{
    char a[10];
    int count=0;
    printf("enter number ");
    gets(a);
    for(int i=0;a[i];i++)
    {
        count++;
    }
    printf("%d",count);
}
