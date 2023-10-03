#include<iostream>
using namespace std;
bool linearSearch(int *arr, int len, int key){
    if(len == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    return linearSearch(arr+1, len-1, key);
}
int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int key;
    cout<<"Enter Element to be Searched: ";
    cin>>key;
    bool ans = linearSearch(arr, 5, key);
    if(ans){
        cout<<"Element Found !!";
    }
    else{
        cout<<"Element not Found :(";
    }
    return 0;
}