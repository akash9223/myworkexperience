#include<stdio.h>
void reverse(int[],int);
int main()
{
    int n;
    printf("enter how many number you want to enter: ");
    scanf("%d",&n);
    printf("enter %d number",n);
    int a[n];
    reverse(a,n);
}
void reverse(int b[],int size)
{
     for(int i=0;i<=size;i++)
     {
         scanf("%d",&b[i]);
     }
     for(int i=size;i>=0;i--)
     {
         printf("\n%d",b[i]);
     }
}
