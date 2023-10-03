#include<iostream>
using namespace std;
char maxOccur(string s){
    int a[26] ={0};
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int num = 0;
        num = ch - 'a';
        a[num]++;
    }

    int maximum = -1, ans  = 0;
    for(int i=0; i<26; i++){
        if(a[i]>maximum){
            ans = i;
            maximum = a[i];
        }
    }
    char maxOcc = 'a'+ans;
    return maxOcc;
}
int main()
{
    string s;
    cout<<"Enter a word: ";
    cin>>s;
    cout<<"Maximum Occurrence: "<<maxOccur(s);
    return 0;
}