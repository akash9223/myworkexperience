#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x,y;
    printf("enter cofficient of x^2, x and constant term");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;

    if (d<0)
        printf("both roots are imaginary");
    if(d==0)
    {
        printf("both roots are equal ");
    x=-b/(2.0*a);
    printf("roots is %f",x);
    }
    if(d>0)
    {
        printf("roots are real and distict");
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("\nroots are: %f,%f",x,y);

    }
    getch();
    return 0;


}
