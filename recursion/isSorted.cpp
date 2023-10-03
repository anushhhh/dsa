#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){
    if(size==0||size==1){
        return true;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}
int main()
{
    int arr[5] = {2, 5, 6, 1};
    if(isSorted(arr, 4)){
        cout<<"Sorted Array";
    }
    else{
        cout<<"Not Sorted"; 
    }
    return 0;
}