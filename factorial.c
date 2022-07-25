#include<stdio.h>
int main()
{
int n;
printf("enter number ");
scanf("%d",&n);
int i=n-1;;
for(i;i>=1;i--)
{
    n=n*i;
}
printf("%d",n);
getch();
return 0;

}
