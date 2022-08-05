#include<stdio.h>
int main()
{
    int year;
    char a;
    printf("\\TO check year is leap year or not//");
    printf("\nenter alphabet a ");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
         printf("enter year");
         scanf("%d",&year);
         if(year%4==0)
         {
             printf("leap year");
         }
         if(year%4!=0)
         {
             printf("not leap year");
         }
         break;
    default:
         printf("invalid input");
    }
}
