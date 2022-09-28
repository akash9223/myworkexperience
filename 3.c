#include<stdio.h>
int main()
{
    char A[10]={'a','e','i','o','u'};
    char B[10];
    int count=0;
    printf("enter string ");
    gets(B);
    for(int i=0;A[i];i++)
    {
        for(int j=0;B[j];j++)
        {
            if(A[i]==B[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);
}
