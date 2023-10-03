#include<iostream>
using namespace std;
void sayDigit(int n){
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n<=0){
        return ;
    }
    int digit = n%10;
    n=n/10;
    sayDigit(n);
    cout<<arr[digit]<<" ";
}
int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    sayDigit(num);
    return 0;
}