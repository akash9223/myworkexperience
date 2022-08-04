#include<stdio.h>
int main()
{
    char choice;
    int a,b;
    printf("a. addition\nb. Substraction\nc. Multiplication\nd. Division");
    printf("\nenter your choice ");
    scanf("%c",&choice);
    switch(choice)
    {
    case 'a':

          printf("enter two number ");
          scanf("%d%d",&a,&b);
          printf("addition of two number is %d",a+b);
          break;
    case 'b':
          printf("enter two number ");
          scanf("%d%d",&a,&b);
          printf("substration of two number is %d",a-b);
          break;
    case 'c':
          printf("enter two number ");
          scanf("%d%d",&a,&b);
          printf("multiplication is %d",a*b);
          break;
    case 'd':
           printf("enter two number ");
           scanf("%d%d",&a,&b);
           printf("division is %d",a/b);
           break;
    default:
          break;
    }
    getch();
    return 0;
}
