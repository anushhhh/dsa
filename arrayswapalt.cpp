#include<iostream>
using namespace std;
void swapAlt(int brr[], int n){
    int temp;
    if(n%2==0){
        for(int i=0; i<n; i+=2){
        temp = brr[i];
        brr[i] = brr[i+1];
        brr[i+1] = temp;
    }
    }
    else{
        for(int i=0; i<n-1; i+=2){
        temp = brr[i];
        brr[i] = brr[i+1];
        brr[i+1] = temp;
    }
    }
    
}
void printArr(int brr[], int n){
    for(int i=0; i<n; i++){
        cout<<brr[i]<<" ";
    }
}
int main()
{
    int b[10], size;
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>b[i];
    }
    swapAlt(b, size);
    printArr(b, size);
return 0;
}