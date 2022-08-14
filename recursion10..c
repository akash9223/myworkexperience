#include<stdio.h>
void reverse(int);
int main()
{
int no;
printf("enter number ");
scanf("%d",&no);
reverse(no);
}
void reverse(int no)
{
    if(no<10)
    {

        return;
    }
    reverse(no/10);
    printf("%d",no%10);

}

