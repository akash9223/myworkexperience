#include<stdio.h>
int  main()
{
    char choice;
    int a,b,c;
   printf("a. check whether a gicen set of three numbers are length of isosceles triangle or not");
   printf("\nb. check whether given set of 3 number are lengths of an a right angled triangle or not ");
   printf("\nc check whether a given set of three numbers are equilateral triangle or not ");
   printf("\nd Exit");
   printf("\n enter your choice ");
   scanf("%c",&choice);
   switch(choice)
   {
   case 'a':

         printf("enter three number ");
         scanf("%d%d%d",&a,&b,&c);
         if(a==b||b==c||c==a)
            printf("isoscles triangle ");

         else
         {
            printf("not isoscles traingle ");
         }
         break;

   case 'c':
          printf("enter three number ");
          scanf("%d%d%d",&a,&b,&c);
          if(a==b&b==c&c==a)
            printf("equilateral triangle ");
          else
          {
            printf("Not equilateral trianlge");
          }
          break;
   case 'd':
            exit(0);
   default:
        printf("invalid input");


   }
}
