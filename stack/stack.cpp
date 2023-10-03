#include<iostream>
using namespace std;
class Stack {
    public: 
        int *arr;
        int top;
        int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(top == -1 || top<size){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack OVERFLOW!!"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack UNDERFLOW"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack Empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(22);
    st.push(20);
    st.push(44);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack not Empty"<<endl;
    }
    return 0;
}