#include<iostream>
using namespace std;
int& 
int updatebyreference(int &n){
    n++;
    return n;
}
int updatebyvalue(int n){
    n++;
    return n;
}
int main()
{
    int value = 5;
    cout<<"Before"<<" "<<value<<endl;
    updatebyvalue(value);
    cout<<"After By Value"<<" "<<value<<endl;
    updatebyreference(value);
    cout<<"After By Reference"<<" "<<value<<endl;
    return 0;
}