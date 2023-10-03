#include<iostream>
using namespace std;
long long int binaryse(int n){
    int s = 0; 
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e){
        int sq = mid*mid;
        if(sq == n){
            return mid;
        }
        else if(sq < n){
            ans = mid;
            s = mid+1;
        }
        else if(sq > n){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
double prec(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i=0; i<precision; i++){
        factor = factor/10;

        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int tempSol = binaryse(n);
    cout<<tempSol;
    // cout<<"ANSWER IS: "<<prec(n, 3, tempSol);
    return 0;
}