#include<iostream>
using namespace std;
string reverseString(string str){
	// Write your code here.
	int n = str.size();
    int j;
    cout<<n;
	string ans = "";
	for(int i=n-1; i>=0; i--){
		if(str[i]==' '){
			j = i+1;
            cout<<j;
			while(j<){
                ans.push_back(str[j]);
				j++;
            }
		}
		ans.push_back(' ');
	}
	return ans;
}
int main()
{
 string str = "Hello World";
 string res = reverseString(str);
 cout<<res;
 return 0;
}