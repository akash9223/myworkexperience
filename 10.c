#include<stdio.h>
int main()
{
    char a[10];
    int s=0;
    int count=0;
    printf("enter your name: ");
    gets(a);
    for(int i=0;a[i];i++)
    {

        if(a[i]==s)
        {
            i++;
        }
        count=1;
        if(a[i]!=s)
        {
        for(int j=i+1;a[j];j++)
        {
            if(a[i]==a[j])
            {
                count++;
                s=a[i];
            }
        }
        printf("\n%c- %d",a[i],count);
        }
    }

}
