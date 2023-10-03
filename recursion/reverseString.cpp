#include<iostream>
using namespace std;
void reverse(int i, int j, string& s){
    if(i>j){
        return ;
    }
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(i, j, s);
}
int main()
{
    string str = "anushka";
    reverse(0, str.length()-1, str);
    cout<<str;
    return 0;
}