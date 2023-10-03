#include<iostream>
using namespace std;
void print(int *q){
    cout<<*q<<endl;
}
void update(int *q){
    *q = *q+3;
    cout<<*q<<endl;
}
int getSum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    // int value = 5;
    // int *p = &value;

    // print(p);
    // update(p);
    // cout<<(*p)++<<endl;
    // cout<<*p<<endl;
    // cout<<value<<endl;

    int arr[8] = {6, 1, 3, 4, 5, 5, 6, 7};
    int n = 8;
    cout<<"Sum is: "<<getSum(arr+3, n-3);
return 0;
}