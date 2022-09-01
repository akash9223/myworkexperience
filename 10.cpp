#include<iostream>
using namespace std;
int main()
{
    int a[10],s=0;
    cout<<"enter 10 number is ";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        s=a[i]+s;
    }
   cout<<"sum is "<<s;
}
