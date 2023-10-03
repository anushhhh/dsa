#include<iostream>
using namespace std;
class Node{
    public: 
        int data;
        Node* next;
    //constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
    //destructor
        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"Memory freed with data "<<value<<endl;
        }

};
int lengthof(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPos(Node* &head, Node* &tail, int pos, int d){
    Node*temp = head;
    if(pos == 1){
        insertAtHead(head, d);
        return ;
    }
    // int len = lengthof(head);
    // if(len == (pos-1)){
    //     insertAtTail(tail, d);
    //     return;
    // }
    int count = 1;
    while(count < (pos-1)){
        temp = temp->next;
        count++;
    }
    
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(int pos, Node* &head, Node* &tail){
    Node* temp = head;
    if(pos == 1){
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting middle or last node
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count<(pos)){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        if(prev->next == NULL){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
    

}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1 = new Node(10);

    // head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 30);
    print(head);
    insertAtPos(head, tail, 5, 22);
    print(head);
    cout<<lengthof(head)<<endl;
    cout<<"HEAD "<<head->data<<endl;
    cout<<"TAIL "<<tail->data<<endl;
    deleteNode(5, head, tail);
    print(head);
    cout<<lengthof(head)<<endl;
    cout<<"TAIL "<<tail->data<<endl;
    return 0;
}