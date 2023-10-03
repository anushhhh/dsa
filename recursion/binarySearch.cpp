#include<iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int k){
    int mid = s + (e-s)/2;
    if(s>e){
        false;
    }
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}
int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int key = 10;
    bool ans = binarySearch(arr, 0, 5, key);
    if(ans){
        cout<<"FOUND!!";
    }
    else{
        cout<<"NOT FOUND :(";
    }
    return 0;
}