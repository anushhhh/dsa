#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return a;
    }
    if(b==0){
        return b;
    }

    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else if(b>a){
            b = b-a;
        }
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter the values of a and b";
    cin>>a>>b;
    cout<<gcd(a, b);
    return 0;
}