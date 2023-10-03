#include<iostream>
using namespace std;
void reverse_string(char name[], int len){
    int s = 0;
    int e = len-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int main()
{
    char name[20];
    cout<<"Enter name: ";
    cin>>name;
    int len = 0;
    int i = 0;
    while(name[i] != '\0'){
        len++;
        i++;
    }
    reverse_string(name, len);
    cout<<"Revered String = "<<name;
    return 0;
}