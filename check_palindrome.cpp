#include<iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch >= 'a' && ch<= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isConsider(char ch){
    if((ch>= 'a'&& ch<='z')||(ch>= 'A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return true;
    }
    else{
        return false;
    }
}
bool checkPalindrome(string s)
{
    int st = 0;
    int e = s.length()-1;
    while(st<e){
        if(isConsider(s[st])==false){
            st++;
        }
        else if(isConsider(s[e])==false){
            e--;
        }
        else if(toLowerCase(s[st]) != toLowerCase(s[e])){
            return false;
        }
        else{
            st++;
            e--;
        }
    }
    return true;
}
int main()
{
    string str;
    cout<<"enter string: ";
    cin>>str;
    cout<<checkPalindrome(str);
    return 0;
}