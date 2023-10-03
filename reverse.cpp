#include<iostream>
using namespace std;
string reverse_words(string s){
    int start=0;
    int end=s.length()-1;
    while(start<end){
        swap(s[start++], s[end--]);
    }
    return s;
}
int main()
{
    string s;
    cout<<"Enter a sentence: ";
    getline(cin, s);
    cout<<"Reversed sentence: "<<reverse_words(s);
    return 0;
}