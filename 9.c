#include<stdio.h>
int main()
{
    char a[10];
    int s;
    printf("enter your name: ");
    gets(a);
    for(int i=0;a[i];i++)
    {
        for(int j=i+1;a[j];j++)
        {
            if(a[j]<=a[i])
            {
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }
    }
    for(int i=0;a[i];i++)
    {
        printf("%c",a[i]);
    }

}
