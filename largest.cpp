#include<iostream>
#include<string>

using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of a,b,c";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"a is the greatest";
    }
    else if(b>c&&b>a)
    {
        cout<<"b is the greatest";
    }
    else if(c>a&&c>b)
    {
        cout<<"c is the greatest";
    }
}
