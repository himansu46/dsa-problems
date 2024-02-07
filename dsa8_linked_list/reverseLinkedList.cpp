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

void reverseLinkedList(Node* &head) {
        
        if(head==NULL || head->next==NULL){
            return;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=NULL;

        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
     head=prev;   
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

int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtHead(head, 18);
    

    printList(head);

    reverseLinkedList(head);
    cout<<endl;
    printList(head);

    return 0;
}
