#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter rows of array: ";
    cin>>row;
    int* num = new int[row]; // stores number of columns in each row
    int** arr = new int*[row]; // jagged array

    for(int i=0; i<row; i++){
        cout<<"Enter column for row "<<i<<" ";
        cin>>num[i];
        arr[i] = new int[num[i]];
    }
    //input values
    for(int i=0; i<row; i++){
        for(int j=0; j<num[i]; j++){
            cout<<"Enter element "<<i<<" "<<i*num[i]+j<<" ";
            cin>>arr[i][j];
        }
    }
    //show array
    for(int i=0; i<row; i++){
        for(int j=0; j<num[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}