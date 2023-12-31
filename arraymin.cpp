#include<iostream>
using namespace std;
int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cin>>size;
    int arr[10];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Maximum value: "<<getMax(arr, size)<<endl;
    cout<<"Minimum value: "<<getMin(arr, size)<<endl;
    return 0;
}