#include<iostream>
using namespace std;
int getSum(int *arr, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    //dynamic array
    int* arr = new int[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = getSum(arr, n);
    cout<<"Sum of array: "<<sum;
    return 0;
}