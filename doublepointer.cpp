#include<iostream>
using namespace std;
int main()
{
    int value = 5;
    int* ptr = &value;
    int** ptr2 = &ptr;
    cout<<"Printing value"<<endl;
    cout<<value<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
    cout<<"Printing address of value"<<endl;
    cout<<&value<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<"Printing address of ptr"<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    cout<<"Printing address of ptr2"<<endl;
    cout<<&ptr2;
    
    
return 0;
}