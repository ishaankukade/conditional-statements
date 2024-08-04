#include<iostream>
#include<string>

using namespace std;
int main()
{
int x,y;
cout<<"enter coordinates";
cin>>x>>y;
if(x>0 and y>0)
{
    cout<<"it is in first quadrant";
}
else if(x>0 and y<0)
{
    cout<<"it is in second quadrant";
}
else if(x<0 and y<0)
{
    cout<<"it is in third quadrant";
}
else if(x<0 and y>0)
{
    cout<<"it is in fourth quadrant";
}
else
{
    cout<<"it is on origin";
}

}