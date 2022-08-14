#include<stdio.h>
void octal(int);
int main()
{
    int no;
    printf("enter number ");
    scanf("%d",&no);
    octal(no);
}
void octal(int no)
{
    if(no<8)
        return;
    octal(no/8);
     if(no/8<8)
     {
         printf("%d",no/8);
     }
    printf("%d",no%8);


}
