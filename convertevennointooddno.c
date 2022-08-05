#include<stdio.h>
int main()
{
    int no;
    char a;
    printf("enter 5 ");
    scanf("%d",&a);
    switch(a)
    {
    case 5:
         printf("enter even number ");
         scanf("%d",&no);
         if(no%2==0)
         {
         printf("%d",no+1);
         }
        else
        {
            printf("invalid input");
        }

    }
    getch();
    return 0;
}
