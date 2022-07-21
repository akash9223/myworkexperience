#include<stdio.h>
int main()
{
    int no,a,sum;
    printf("Enter three digit number: ");
    scanf("%d",&no);
    sum=no%10;
    no=no/10;
    a=no%10;
    sum=sum+a;
    a=no/10;
    sum=sum+a;
    printf("sum of three digit number is %d",sum);
    getch();
    return 0;
}
