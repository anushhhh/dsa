#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int d){
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }
        ~Node(){
            int val = this->data;
            if(next != NULL){
                delete next;
                next = NULL;
            }
            cout<<"Memory freed for node "<<val<<endl;
        }
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int len(Node* head){
    int length = 0;
    Node* temp = head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
void insertAtHead(Node* &tail, Node* &head, int data){
    //empty list
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node* &tail, Node* &head, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
        return;
    }
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPos(Node* &head, Node* &tail, int pos, int data){
    if(pos==1){
        insertAtHead(tail, head, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count<(pos-1)){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, head, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(int pos, Node* &head){
    if(pos==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count<pos){
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(tail, head, 11);
    insertAtHead(tail, head, 16);
    insertAtHead(tail, head, 18);
    insertAtTail(tail, head, 20);
    insertAtPos(head, tail, 5, 40);
    insertAtPos(head, tail, 3, 100);
    print(head);
    cout<<len(head)<<endl;
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    deleteNode(4, head);
    print(head);
return 0;
}
