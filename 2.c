#include<stdio.h>
int main()
{
    char a[20];
    int count=1,s=0;
    int i=0;
    int j=0;
    printf("enter your name: ");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(a[i]==s)
        {
            i++;

        }
        if(a[i]!=s)
        {
        count=1;
        for( j=i+1;a[j];j++)
        {
            if(a[i]==a[j])
            {
                count++;
                s=a[j];
            }
        }
        printf("\n%c %d",a[i],count);
        }

    }
}
