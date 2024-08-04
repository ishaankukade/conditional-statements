#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"MENU: "<<endl;
    cout<<"1. Monday"<<endl;
    cout<<"2. Tuesday"<<endl;
    cout<<"3. Wednesday"<<endl;
    cout<<"4. Thursday"<<endl;
    cout<<"5. Friday"<<endl;
    cout<<"6. Saturday"<<endl;
    cout<<"7. Sunday"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Monday"<<endl;
            break;
        }
        case 2: 
        {
            cout<<"Tuesday"<<endl;
            break;
        }
        case 3: 
        {
            cout<<"Wednesday"<<endl;
            break;
        }
        case 4: 
        {
            cout<<"Thursday"<<endl;
            break;
        }
        case 5: 
        {
            cout<<"Friday"<<endl;
            break;
        }
        case 6:
        {
            cout<<"Saturday"<<endl;
            break;
        }
        case 7:
        {
            cout<<"Sunday"<<endl;
            break;
        }
    }
}
/*MENU: 
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
4
Thursday*/