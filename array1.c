#include<stdio.h>
#include<conio.h>
int greater(int [],int);
int main()
{
     int N,result;
     printf("enter size of array ");
     scanf("%d",&N);
     int a[N];
    result=greater(a,N);
    printf("greater number is %d ",result);
    getch();
}

int greater (int b[],int size)
{
    int s;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
   s=b[0];

    for(int i=1;i<size;i++)
    {
        if(b[i]>=s)
            s=b[i];
    }
    return s;

}
