#include<iostream>
using namespace std;
int* getProductArrayExceptSelf(int* arr, int n)
{
    //Write your code here
    int product = 1;
    for(int i=0; i<n; i++){
        product=product*arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            arr[i]=0;
        }
        else{
            arr[i]=product/arr[i];
        }   
    }
    return arr;
}
int main()
{
    int arr[5]={2, 2, 2, 2, 2};
    getProductArrayExceptSelf(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}