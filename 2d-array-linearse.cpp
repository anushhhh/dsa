#include<iostream>
using namespace std;
bool isPresent(int arr[][3], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int target;
    int marks[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Enter element"<<i<<j<<" ";
            cin>>marks[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
    //Linear Search
    cout<<"Enter element to be searched: ";
    cin>>target;
    if(isPresent(marks, target, 3, 3)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}