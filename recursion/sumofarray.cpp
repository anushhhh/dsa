#include<iostream>
using namespace std;
int recurSum(int arr[], int len){
    int sum;
    if(len==0){
        return 0;
    }
    if(len==1){
        return arr[0];
    }
    return arr[0] + recurSum(arr+1, len-1);
}
int main()
{
    int arr[7] = {2, 3, 4, 5, 6, 7, 3};
    cout<<"Sum Of All Element Of the Array is ";
    cout<<recurSum(arr, 7);
    return 0;
}