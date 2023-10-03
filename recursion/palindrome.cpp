#include<iostream>
using namespace std;
bool palindrome(int i, int j, string& s){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        i++;
        j--;
        return palindrome(i, j, s);
    }
}
int main()
{
    string str = "aabbccbbaa";
    bool ans = palindrome(0, str.length()-1, str);
    if(ans){
        cout<<"YES!";
    }
    else{
        cout<<"NO :(";
    }
    return 0;
}