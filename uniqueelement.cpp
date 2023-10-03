#include<iostream>
using namespace std;
int getUnique(int* arr, int size){
    int ans=0;
    for(int i=0; i<size; i++){  
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[9] = {2, 3, 1, 1, 6, 3, 6, 2, 9};
    cout<<"Unique Element: "<<getUnique(arr, 9);
    return 0;
}