#include<stdio.h>
float areaofcircle(int);
int main()
{
    int r;
    float result;
    printf("enter redius of circle ");
    scanf("%d",&r);
    result=areaofcircle(r);
    printf("area of circle is %f",result);
    getch();
    return 0;
}
float areaofcircle(int n)
{
    return n*3.14;
}
