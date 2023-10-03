#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter Rows: ";
    cin>>n;
    cout<<"Enter Columns: ";
    cin>>m;
    int** arr = new int*[n];

    for(int i=0; i<n; i++){
        arr[i] = new int[m];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"Enter Element "<<i<<j<<" ";
            cin>>arr[i][j];
            cout<<endl;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        delete [] arr[i];
    }
    delete []arr;
    cout<<"Memory released"<<endl;
    return 0;
}