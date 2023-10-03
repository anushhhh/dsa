#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory freed up for node "<<val<<endl;
    }
};
void print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"List empty"<<endl;
    }
    else{
        do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } while(tail!=temp);
    }
    cout<<endl;
}
void insertNode(Node* &tail, int element, int data){
    if(tail == NULL){
        //empty list
        Node* newnode = new Node(data);
        tail = newnode;
        newnode->next = newnode;
        return;
    }
    else{
        //non-empty list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        //element found
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;

    }
}
void deleteNode(Node* &tail, int element){
    if(tail == NULL){
        cout<<"Empty List!"<<endl;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data!=element){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(curr == prev){
            tail = NULL;
        }
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
bool isCircular(Node* tail){
    if(tail==NULL){
        return true;
    }
    Node* temp = tail->next;
    while(temp!=NULL && temp!=tail){
        temp = temp->next;
    }
    if(temp==NULL){
        return false;
    }
    return true;
}
bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        //cycle present
        if(visited[temp]==true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
Node* flyodDetection(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow==fast){
            cout<<"Present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}
Node* loopStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = flyodDetection(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
    Node* startPoint = loopStartingNode(head);
    Node* temp = startPoint;
    while(temp->next!=startPoint){
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    Node* tail = NULL;
    insertNode(tail, 1, 4);
    insertNode(tail, 4, 10);
    insertNode(tail, 10, 13);
    insertNode(tail, 4, 20);
    insertNode(tail, 13, 4);
    print(tail);
    if(flyodDetection(tail) != NULL){
        cout<<"LOOP DETECTED"<<endl;
    }
    else{
        cout<<"NO LOOP"<<endl;
    }
    if(isCircular(tail)){
        cout<<"Circular LL"<<endl;
    }
    else{
        cout<<"Not Circular"<<endl;
    }
    cout<<loopStartingNode(tail)->data<<endl;
    removeLoop(tail);
    print(tail);
    return 0;
}