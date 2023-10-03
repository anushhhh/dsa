#include<iostream>
using namespace std;
int main()
{
    int a[10] = {3, 5, 12, 30, 16, 1, 0, -12, 6, 45};
    int num;
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(int i=0; i<10; i++){
        if(a[i]==num){
            cout<<"Element found at: "<<i+1<<" position"<<endl;
        }
        else{
            cout<<"Element not found"<<endl;
        }
    }
    return 0;
}