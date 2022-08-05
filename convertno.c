#include<stdio.h>
int main()
{
    int no;
    char choice;
    printf("a. Convert positive number into negative no\n");
    printf("b. convert negative number into positive no\n");
    printf("enter your choice ");
    scanf("%c",&choice);
    switch(choice)
    {
    case 'a':
          printf("enter positive number");
          scanf("%d",&no);
          printf("%d",no*-1);
          break;
    case 'b':
          printf("enter negative number");
          scanf("%d",&no);
          printf("%d",no*-1);
    }
}
