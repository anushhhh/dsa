#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter your name";
    cin>>name;
    name[3] = '\0';
    cout<<"Hello "<<name<<endl;
    cout<<name[4];
    return 0;
}