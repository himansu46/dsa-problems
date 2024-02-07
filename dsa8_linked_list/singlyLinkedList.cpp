#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }    

    // destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete this->next;
            
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next = head;
    head=temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next = temp;
    tail=temp;
}

void insertAtPosition(Node* tail,Node* &head, int data,int position){
    if(position == 1) {
        insertAtHead(head, data);
        return;
    }
    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}
void printList(Node* &head){
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void deleteNode(Node* &head,int position){
     if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    // insertAtHead(head, 12);
    // insertAtHead(head, 15);
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    insertAtPosition(tail,head,22,3);
    
    printList(head);
    cout<<endl;
        cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    deleteNode(head,3);
    cout<<"After Deletion:"<<endl;
    printList(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    return 0;
}
