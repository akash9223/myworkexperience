#include<stdio.h>
int givendigit(int);
int main()
{
    int no,result,s;
    printf("enter number ");
    scanf("%d",&no);
    s=no;
    result=givendigit(no);
    if (s==no)
        printf("given digit");
}

int givendigit(int no)
{
    return no;
}

