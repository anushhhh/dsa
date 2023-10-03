#include<iostream>
using namespace std;
int main()
{
    int n, i, end, start, mid, key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(i=0; i<n; i++){
        cout<<"Element: "<<i+1<<" ";
        cin>>arr[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>key;
    start = 0;
    end = n-1;
    mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid] == key){
            cout<<"Found at: "<<mid+1;
            break;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
  
    return 0;
}