#include<iostream>
using namespace std;
void revArray(int arr[], int n){
        int temp;
        // for(int i=0; i<n/2; i++){
        //     temp=arr[i];
        //     arr[i]=arr[n-(i+1)];
        //     arr[n-(i+1)]=temp;
        // }
        int s = 0, e = n-1;
        while(s<=e){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a[10];
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>a[i];
    }
    revArray(a, size);
    printArray(a, size);
return 0;
}